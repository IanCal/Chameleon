#include "Chameleon.hpp"

void Chameleon::start(){

	println("Chameleon started");
	addChangeFilter(cast::createLocalTypeFilter<chameleon::StartLearning>(cast::cdl::ADD), new cast::MemberFunctionChangeReceiver<Chameleon>(this, &Chameleon::newStartLearningCommand));

	addChangeFilter(cast::createLocalTypeFilter<chameleon::LearnThis>(cast::cdl::ADD), new cast::MemberFunctionChangeReceiver<Chameleon>(this, &Chameleon::learnThisCommand));
	
	addChangeFilter(cast::createLocalTypeFilter<chameleon::RecogniseThis>(cast::cdl::ADD), new cast::MemberFunctionChangeReceiver<Chameleon>(this, &Chameleon::recogniseThisCommand));

	};

void Chameleon::runComponent(){
//register things here

};

void Chameleon::newStartLearningCommand(const cast::cdl::WorkingMemoryChange &_wmc){
	try{
		lockEntry(_wmc.address, cast::cdl::LOCKEDODR);
	}
	catch (const SubarchitectureComponentException & e) {
		println("Could not lock new learning command, perhaps deleted?");
		return;
	};
	// Create a new algorithm :)
	
	chameleon::StartLearningPtr learnCmd =  getMemoryEntry<chameleon::StartLearning>(_wmc.address);
	BasicAlgorithm *found;
	
	//First, find the algo
	map<string, BasicAlgorithm* >::iterator algo = algorithms.find(learnCmd->algorithm);
	if (algo != algorithms.end()){
		found = (*algo).second->createNew();
		recognisers.insert(make_pair(make_pair(learnCmd->algorithm, learnCmd->ID), found));
		recognisersAlgorithmIndex.insert(make_pair(learnCmd->algorithm,  found));
		recognisersIDIndex.insert(make_pair(learnCmd->ID,  found));
		println("Inserted a new algorithm by the name of %s:%s", learnCmd->algorithm.c_str(), learnCmd->ID.c_str());
		deleteFromWorkingMemory(_wmc.address);
	}
	else{
		println("Couldn't find an algorithm by the name of %s", learnCmd->algorithm.c_str());
	};
};

void Chameleon::learnThisCommand(const cast::cdl::WorkingMemoryChange &_wmc){

	try{
		lockEntry(_wmc.address, cast::cdl::LOCKEDODR);
	}
	catch (const SubarchitectureComponentException & e) {
		println("Could not lock learning command, perhaps deleted?");
		return;
	};
	chameleon::LearnThisPtr learnCmd =  getMemoryEntry<chameleon::LearnThis>(_wmc.address);

	map<pair<string, string>, BasicAlgorithm* >::iterator algo;
	multimap<string, BasicAlgorithm* >::iterator multiIt; 
	multiIt = recognisersIDIndex.find(learnCmd->ID); 
	algo = recognisers.find(make_pair(learnCmd->algorithm, learnCmd->ID));
	
	if (algo != recognisers.end()){
		(*algo).second->learn((vector<float>)learnCmd->data, (vector<float>)learnCmd->label);
		deleteFromWorkingMemory(_wmc.address);
	}
	else{
		if (learnCmd->algorithm == string("*") && learnCmd->ID == string("*")){
			for (algo = recognisers.begin(); algo != recognisers.end(); algo++)
				(*algo).second->learn((vector<float>)learnCmd->data, (vector<float>)learnCmd->label);
		}
		else if (learnCmd->algorithm == string("*")){
			for ( multiIt = recognisersIDIndex.find(learnCmd->ID); 
					multiIt != recognisersIDIndex.upper_bound(learnCmd->ID);
					multiIt++)
				(*multiIt).second->learn((vector<float>)learnCmd->data, (vector<float>)learnCmd->label);
		}
		else if (learnCmd->ID == string("*")){
			for (multiIt = recognisersAlgorithmIndex.find(learnCmd->algorithm); 
					multiIt != recognisersAlgorithmIndex.upper_bound(learnCmd->algorithm);
					multiIt++)
				(*multiIt).second->learn((vector<float>)learnCmd->data, (vector<float>)learnCmd->label);
		}
		else{
			println("Couldn't find an algorithm by the name of %s with an ID of %s", learnCmd->algorithm.c_str(), learnCmd->ID.c_str());
		};
	};

};

void Chameleon::recogniseThisCommand(const cast::cdl::WorkingMemoryChange &_wmc){

	try{
		lockEntry(_wmc.address, cast::cdl::LOCKEDODR);
	}
	catch (const SubarchitectureComponentException & e) {
		println("Could not lock recognition command, perhaps deleted?");
		return;
	};
	chameleon::RecogniseThisPtr learnCmd =  getMemoryEntry<chameleon::RecogniseThis>(_wmc.address);

	//map<string, BasicAlgorithm>::iterator algo = recognisers.find(learnCmd->ID);
	map<pair<string, string>, BasicAlgorithm* >::iterator algo;
	algo = recognisers.find(make_pair(learnCmd->algorithm, learnCmd->ID));
	if (algo != recognisers.end()){
		vector<float> b;
		(*algo).second->recognise(learnCmd->data,b);
		learnCmd->label.swap(b);
		overwriteWorkingMemory(_wmc.address, learnCmd);
	}
	else{
		println("Couldn't find an algorithm by the name of %s with an ID of %s", learnCmd->algorithm.c_str(), learnCmd->ID.c_str());
	};

	unlockEntry(_wmc.address);
};

void Chameleon::registerAlgorithm(string name, BasicAlgorithm* algorithm){
	algorithms.insert( make_pair(name, algorithm));
};
