#ifndef BASIC_ALGORITHM_HPP
#define BASIC_ALGORITHM_HPP 

#include <vector>
#include <map>
#include <string>

using namespace std;

class BasicAlgorithm{

	public:
		BasicAlgorithm();
		virtual void config(int inputSize, int outputSize, map<string, int>& configInt, map<string, float>& configFloat, map<string, string>& configString, map<string, bool>& configBool);
		virtual void learn(vector<float> input, vector<float> label);
		virtual void recognise(vector<float> input, vector<float>& label);
		virtual BasicAlgorithm* createNew();

};

#endif
