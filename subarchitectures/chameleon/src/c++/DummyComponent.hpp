#ifndef DUMMYCHAMELEON_HPP
#define DUMMYCHAMELEON_HPP 

#include <cast/architecture.hpp>
#include "LearnCommands.hpp"
#include <string>
#include <map>
#include <boost/thread/mutex.hpp>
#include <boost/thread/condition.hpp>
#include "ChameleonComponent.hpp"


using namespace cast;
using namespace std;

class DummyComponent :
	public ChameleonComponent
	{
		public:
			DummyComponent();
		protected:
			virtual void runComponent();
			virtual void start();
	};

#endif
