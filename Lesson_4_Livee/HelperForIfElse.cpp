#include "HelperForIfElse.h"
#include <iostream>
#include <iomanip>


void TestTernary()
{
	bool isGlassFull{ false };
	const int liquidCount = isGlassFull ? 10 : 3;

	//if (isGlassFull)
	//{
	//	liquidCount = 10;
	//}
	//else
	//{
	//	liquidCount = 3;
	//}

	std::cout << liquidCount << std::endl;

}



void TestComparisonOperators()
{
	// >, <, >=, <=, !, ==

	double doubleOne{ 1-0.001 };
	double doubleTwo{ 10-9.001 };

	if (AreDoublesEqualBetter(doubleOne, doubleTwo, 0.0000001))
	{
		std::cout << "doubleOne = doubleTwo for custom check"<<std::endl;
	}

	if (doubleOne == doubleTwo)
	{
		std::cout << "doubleOne = doubleTwo" << std::endl;
	}

	if (doubleOne > doubleTwo)
	{
		std::cout << "doubleOne > doubleTwo" << std::endl;
	}

	if (doubleOne < doubleTwo)
	{
		std::cout << std::setprecision(25);
		std::cout << doubleOne << std::endl;
		std::cout << doubleTwo << std::endl;
		std::cout << "doubleOne < doubleTwo" << std::endl;
	}
}

bool AreDoublesEqual(double a, double b, double epsilon)
{
	return fabs(a-b) < epsilon;
}

bool AreDoublesEqualBetter(double a, double b, double epsilon)
{
	return fabs(a - b) < ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

bool AreDoublesEqualUsingSTL(double a, double b)
{
	return std::fabs(a-b) < std::numeric_limits<double>::epsilon();
}

void LogicalOperatorsTest()
{
	// &&, ||

	bool isEnoughCharge{ true };
	bool isFree{ true };

	bool isNeedRepair{ false };
	bool isNeedFuel{ false };

	//if (isEnoughCharge)
	//{
	//	if (isFree)
	//	{
	//		if (!isNeedRepair)
	//		{
	//			//dotask
	//		}
	//	}
	//}

	if (isEnoughCharge && isFree && !isNeedRepair)
	{
		//dotask
	}

	if (!isNeedRepair && !isNeedFuel)
	{
		//dotask
	}

	// !(A && B) = !A || !B
	// !(A || B) = !A && !B


	bool simpleCondition = false;

	if (simpleCondition && CheckSomethingHuge())
	{
		//do domething
	}

	if (LightweightCheckOne() && LightweightCheckTWo())
	{
		//do smth
	}

}

bool CheckSomethingHuge()
{
	// a lot of calculations
	return false;
}

bool LightweightCheckOne()
{
	//returns false more often then LightweightCheckTWo
	return false;
}

bool LightweightCheckTWo()
{
	return false;
}
