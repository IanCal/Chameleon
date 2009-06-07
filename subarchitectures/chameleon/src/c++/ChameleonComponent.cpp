#include "ChameleonComponent.hpp"



ChameleonComponent::ChameleonComponent(){
	filtersSet = false;
};

void ChameleonComponent::simpleCreate(string algorithm, string ID, int inputLength, int outputLength){

	if (!filtersSet)
		setFilters();

	chameleon::StartLearningPtr StartLearningThis = new chameleon::StartLearning();
	StartLearningThis->algorithm = algorithm; 
	StartLearningThis->ID = ID;
	StartLearningThis->inputLength = inputLength;
	StartLearningThis->outputLength = outputLength;
	addToWorkingMemory(newDataID(), StartLearningThis);

};

void ChameleonComponent::simpleLearn(string algorithm, string ID, vector<float> data, vector<float> label){

	chameleon::LearnThisPtr LearnThisNow = new chameleon::LearnThis();
	LearnThisNow->algorithm = algorithm;
	LearnThisNow->ID = ID;
	LearnThisNow->data = data;
	LearnThisNow->label = label;
	addToWorkingMemory(newDataID(), LearnThisNow);
};


void ChameleonComponent::simpleRecognise(string algorithm, string ID, vector<float> data, vector<float>& label){
	//Create object
	chameleon::RecogniseThisPtr RecogniseThisRandom = new chameleon::RecogniseThis();
	RecogniseThisRandom->algorithm = algorithm;
	RecogniseThisRandom->ID = ID;
	RecogniseThisRandom->data = data;
	string id = newDataID();

	//LOCK DOWN
	boost::mutex *newMutex = new boost::mutex;
	mutexes.insert(make_pair(id, newMutex));
	boost::unique_lock<boost::mutex> lock(*newMutex);
	
	boost::condition_variable *newcondition = new boost::condition_variable;
	conditionalVariables.insert(make_pair(id, newcondition));
	
	// Add to working memory
	addToWorkingMemory(id, RecogniseThisRandom);

	//Wait for a result
	newcondition->wait(lock);

	//Deal with result
	const cast::cdl::WorkingMemoryChange &_wmc = (*recognisedResults.find(id)).second;
	chameleon::RecogniseThisPtr learnCmd =  getMemoryEntry<chameleon::RecogniseThis>(_wmc.address);
	try{
		deleteFromWorkingMemory(_wmc.address);
	}
	catch (const SubarchitectureComponentException & e) {
		println("Could not delete recognised data: %s", e.what());
	};

	//clean up!
	mutexes.erase(id);
	conditionalVariables.erase(id);

	//return
	label.swap(learnCmd->label);
}

void ChameleonComponent::setFilters(){
	addChangeFilter(cast::createLocalTypeFilter<chameleon::RecogniseThis>(cast::cdl::OVERWRITE), new cast::MemberFunctionChangeReceiver<ChameleonComponent>(this, &ChameleonComponent::recognised));
	addChangeFilter(cast::createLocalTypeFilter<chameleon::LearnThis>(cast::cdl::DELETE), new cast::MemberFunctionChangeReceiver<ChameleonComponent>(this, &ChameleonComponent::learned));

};

void ChameleonComponent::recognised(const cast::cdl::WorkingMemoryChange &_wmc){
	recognisedResults.insert(make_pair(_wmc.address.id, _wmc));
	(*conditionalVariables.find(_wmc.address.id)).second->notify_one();
};
void ChameleonComponent::learned(const cast::cdl::WorkingMemoryChange &_wmc){
	//Maybe do something here?
};
