#ifndef CHAMELEON_HPP
#define CHAMELEON_HPP 

#include <cast/architecture.hpp>
#include <cast/core.hpp>
#include "LearnCommands.hpp"
#include "BasicAlgorithm.hpp"
#include <map>
#include <string>

using namespace std;
using namespace cast;


class Chameleon :
	public ManagedComponent
	{
		protected:
			map<string, BasicAlgorithm* > algorithms;
			map<pair<string, string> , BasicAlgorithm* > recognisers;
			multimap<string, BasicAlgorithm*> recognisersAlgorithmIndex;
			multimap<string, BasicAlgorithm*> recognisersIDIndex;

			virtual void runComponent();
			virtual void start();
			void newStartLearningCommand(const cast::cdl::WorkingMemoryChange &_wmc);
			void learnThisCommand(const cast::cdl::WorkingMemoryChange &_wmc);
			void recogniseThisCommand(const cast::cdl::WorkingMemoryChange &_wmc);
			void registerAlgorithm(string name, BasicAlgorithm* algorithm);
			
	};

#endif
