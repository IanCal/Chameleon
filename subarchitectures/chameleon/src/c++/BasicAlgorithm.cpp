#include "BasicAlgorithm.hpp"

BasicAlgorithm::BasicAlgorithm(){};
void BasicAlgorithm::learn(vector<float> input, vector<float> label){};

void BasicAlgorithm::recognise(vector<float> input, vector<float>& label){
	vector<float> a;
	a.push_back(-1.f);
	label.swap(a);

};
BasicAlgorithm* BasicAlgorithm::createNew(){
	return new BasicAlgorithm();
};
