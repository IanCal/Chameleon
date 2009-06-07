#ifndef BASIC_ALGORITHM_HPP
#define BASIC_ALGORITHM_HPP 

#include <vector>

using namespace std;

class BasicAlgorithm{

	public:
		BasicAlgorithm();
		virtual void learn(vector<float> input, vector<float> label);
		virtual void recognise(vector<float> input, vector<float>& label);
		virtual BasicAlgorithm* createNew();

};

#endif
