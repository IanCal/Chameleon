#ifndef CHAMELEONCOMPONENT_HPP
#define CHAMELEONCOMPONENT_HPP 

#include <cast/architecture.hpp>
#include "LearnCommands.hpp"
#include <string>
#include <map>
#include <boost/thread/mutex.hpp>
#include <boost/thread/condition.hpp>


using namespace cast;
using namespace std;

class ChameleonComponent :
	public ManagedComponent
	{
		public:
			ChameleonComponent();
		protected:

			bool filtersSet;

			map<string, boost::mutex* > mutexes;
			map<string, boost::condition_variable* > conditionalVariables;
			map<string, const cast::cdl::WorkingMemoryChange &> recognisedResults;

			void simpleRecognise(string algorithm, string ID, vector<float> data, vector<float>& label);
			void simpleLearn(string algorithm, string ID, vector<float> data, vector<float> label);
			void simpleCreate(string algorithm, string ID, int inputLength, int outputLength);
			
			void recognised(const cast::cdl::WorkingMemoryChange &_wmc);
			void learned(const cast::cdl::WorkingMemoryChange &_wmc);
			void setFilters();
	};

#endif
