#include "RandomAlgorithm.hpp"
#include <stdio.h>

void RandomAlgorithm::learn(){
};
void RandomAlgorithm::recognise(){
	printf("Reg\n");
};

RandomAlgorithm RandomAlgorithm::createNew(){
	printf("NEW\n");
	return *(new RandomAlgorithm());
};
