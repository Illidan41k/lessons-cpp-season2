#include <iostream>
#include "GlobalVariablesTypes.h"

//int globalIntegerValue = 42;

int nextUserId = 0;

void CheckGlobalVar()
{
	globalIntegerValue++;
	std::cout << __func__ << ": " << globalIntegerValue << std::endl;
}

int GetUniqueIdForNextUser()
{
	nextUserId++;
	return nextUserId;
}
