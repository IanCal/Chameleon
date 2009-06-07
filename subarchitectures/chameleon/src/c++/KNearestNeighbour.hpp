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

		virtual void learn(vector<float> input, vector<float> label);
		virtual void recognise(vector<float> input, vector<float>& label);
		virtual KNearestNeighbour* createNew();
};

#endif
