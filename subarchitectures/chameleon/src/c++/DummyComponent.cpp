#include "DummyComponent.hpp"

extern "C" {
	cast::CASTComponentPtr
		newComponent() {
			return new DummyComponent();
		}
}

DummyComponent::DummyComponent(){};

void DummyComponent::runComponent(){

	//Create a new algorithm of type KNN, with ID First
	simpleCreate(string("KNN"), string("First"), 3, 1);
	sleep(1);

	//   Learn command
	// Create the data
	vector<float> dataToLearn(3,0.5f);
	// set the label
	vector<float> labelOfData(1,1.f);
	// Call the learning
	simpleLearn(string("KNN"), string("First"), dataToLearn, labelOfData);

	//lots
	for (int i = 0; i < 20; i++) {
		labelOfData[0] = (float) i;
		dataToLearn[0] = (float) i;
		simpleLearn(string("*"), string("First"), dataToLearn, labelOfData);
	}

	println("Learned");
	sleep(1);

	//    Recognition command
	// create the data
	vector<float> dataToRecog(3,0.5f);
	// initialise the structure for the result
	vector<float> result;
	// call the recognition
	simpleRecognise(string("KNN"), string("First"), dataToRecog, result);


	for (int i = 0; i < 20; i++) {
		dataToRecog[0] = 0.1 + i;
		simpleRecognise(string("KNN"), string("First"), dataToRecog, result);
		println("%d recognised", (int)(*result.begin()));
	};

	};


void DummyComponent::start(){

};
