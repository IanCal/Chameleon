#ifndef KNN_HPP 
#define KNN_HPP 

#include "BasicAlgorithm.hpp"
#include <vector>

using namespace std;

class KNearestNeighbour :
	public BasicAlgorithm
{
	public:
		KNearestNeighbour();
	
		vector<pair<vector<float>, int> >previouslySeen;
		
		float distanceSq(vector<float> a, vector<float> b);

		
		virtual void config(int inputSize, int outputSize, map<string, int>& configInt, map<string, float>& configFloat, map<string, string>& configString, map<string, bool>& configBool);
		virtual void learn(vector<float> input, vector<float> label);
		virtual void recognise(vector<float> input, vector<float>& label);
		virtual KNearestNeighbour* createNew();
};

#endif
