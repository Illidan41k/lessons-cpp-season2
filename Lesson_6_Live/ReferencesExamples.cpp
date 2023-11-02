#include "ReferencesExamples.h"
#include <iostream>

void SimpleRefs()
{
	int value = 23;

	int& referenceToValue = value;

	std::cout << &value << std::endl;
	std::cout << &referenceToValue << std::endl;

	value += 10;
	referenceToValue += 10;

	std::cout << value << std::endl;
}


void ConstAndNotConst()
{
	int a = 30;

	const int& referenceToA = a;

	const int b = 56;

	const int& referenceToB = b;

	//int& referenceToNothing; //нельзя без инициализатора

}

void TestRefs()
{
	SimpleRefs();
}
