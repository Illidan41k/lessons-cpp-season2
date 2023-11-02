#include "TestAuto.h"
#include <iostream>

int globalInt = 128;

int& GetValue()
{
	return globalInt;
}

void TestAuto()
{
	auto a = 42;
	auto y = 34.2323;
	auto c = 'r';
	auto isTrue = true;
	auto pointer = &y;
	auto doublePointer = &pointer;

	decltype(23) x = 442;

	auto X = GetValue();
	decltype(GetValue()) Y = GetValue();

	X += 10;


	std::cout << "X: " << X << " , globalInt: " << globalInt << std::endl;


	std::cout << typeid(a).name() << std::endl
		<< typeid(y).name() << std::endl
		<< typeid(c).name() << std::endl
		<< typeid(isTrue).name() << std::endl
		<< typeid(pointer).name() << std::endl
		<< typeid(doublePointer).name() << std::endl
		<<"======================================"<<std::endl
		<< typeid(x).name() << std::endl;
}
