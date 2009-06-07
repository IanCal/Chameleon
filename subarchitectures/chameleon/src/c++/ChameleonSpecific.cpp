#include "ChameleonSpecific.hpp"
#include "KNearestNeighbour.hpp"
extern "C" {
	cast::CASTComponentPtr
		newComponent() {
			return new ChameleonSpecific();
		}
}

void ChameleonSpecific::runComponent(){
	registerAlgorithm(string("KNN"), new KNearestNeighbour());
};

