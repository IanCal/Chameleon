#include "KNearestNeighbour.hpp"
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <float.h>

KNearestNeighbour::KNearestNeighbour(){
	
};

void KNearestNeighbour::config(int inputSize, int outputSize, map<string, int>& configInt, map<string, float>& configFloat, map<string, string>& configString, map<string, bool>& configBool){

};

float KNearestNeighbour::distanceSq(vector<float> a, vector<float> b){
	float dist = 0.0;
	if (a.size() == b.size()){
		vector<float>::iterator itB = b.begin();
		for (vector<float>::iterator itA = a.begin(); itA != a.end(); itA++){
			dist += pow((*itA) - (*itB), 2);
			itB++;
		} 
	}
	else{
		dist = FLT_MAX;
	};
	return dist;
	
};

void KNearestNeighbour::learn(vector<float> input, vector<float> label){
	previouslySeen.push_back(make_pair(input, (int)(*(label.begin()))));
};

void KNearestNeighbour::recognise(vector<float> input, vector<float>& label){
	vector<pair<float, int> > distances;
	float distance;
	for (std::vector<pair<vector<float>,int > >::iterator it = previouslySeen.begin(); it != previouslySeen.end(); it++){
		distance = distanceSq(input, (*it).first);
		distances.push_back(make_pair(distance, (int)(*it).second));
	} 
	sort(distances.begin(), distances.end());
	vector<float> a;
	a.push_back((float) (*distances.begin()).second);
	label.swap(a);
};

KNearestNeighbour* KNearestNeighbour::createNew(){
	return new KNearestNeighbour();
};
