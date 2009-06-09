#include "BasicAlgorithm.hpp"

BasicAlgorithm::BasicAlgorithm(){};

void BasicAlgorithm::config(int inputSize, int outputSize, map<string, int>& configInt, map<string, float>& configFloat, map<string, string>& configString, map<string, bool>& configBool){};

void BasicAlgorithm::learn(vector<float> input, vector<float> label){};

void BasicAlgorithm::recognise(vector<float> input, vector<float>& label){};

BasicAlgorithm* BasicAlgorithm::createNew(){
	return new BasicAlgorithm();
};
