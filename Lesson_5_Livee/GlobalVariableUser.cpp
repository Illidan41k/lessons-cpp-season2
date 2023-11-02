#include <iostream>
#include "GlobalVariableUser.h"
#include "GlobalVariablesTypes.h"


void CheckUserVariable()
{
	globalIntegerValue -= 4;
	std::cout << __func__ << ": " << globalIntegerValue << std::endl;
}
