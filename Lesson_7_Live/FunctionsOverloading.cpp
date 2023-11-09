#include "FunctionsOverloading.h"
#include <iostream>

void PrintSum(int a, int b)
{
	std::cout << "int function" << ": " << std::endl;

	std::cout << a + b << std::endl;
}

void PrintSum(double a, double b)
{
	std::cout << "double function" << ": " << std::endl;

	std::cout << a + b << std::endl;
}

int EnterNumber(int higherThreshold)
{
	std::cout << "input with one threshold" << ": " << std::endl;
	int number{};

	std::cin >> number;

	if (/*ввод корректен*/ number < higherThreshold)
	{
		//всё ок
		return number;
	}
	else
	{
		return 0;
	}
}

int EnterNumber(int lowerThreshold, int higherThreshold)
{
	std::cout << "input with two thresholds" << ": " << std::endl;
	int number{};

	std::cin >> number;

	if (/*ввод корректен*/ (number < higherThreshold) && (number > lowerThreshold))
	{
		//всё ок
		return number;
	}
	else
	{
		return 0;
	}
}

//default parameter (параметры по умолчанию)
int EnterNumberV2(int higherThreshold = INT_MAX, int lowerThreshold = INT_MIN)
{
	std::cout << "input with two OPTIONAL thresholds" << ": " << std::endl;
	int number{};

	std::cin >> number;

	if ((number < higherThreshold) && (number > lowerThreshold))
	{
		//всё ок
		return number;
	}
	else
	{
		return 0;
	}
}


void SomeExamples()
{
	/*PrintSum(10, 15);
	PrintSum(10.3, 15.8);

	std::cout << EnterNumber(35) << std::endl;

	std::cout << EnterNumber(10, 56) << std::endl;*/

	std::cout << EnterNumberV2(10, -45) << std::endl;
	std::cout << EnterNumberV2() << std::endl;

	std::cout << EnterNumberV2(INT_MAX, -49) << std::endl;
}

void BadCases()
{

}

void FunctionOne(int paramOne, int paramTwo, double paramThree)
{

}

void TestFunctionsOverloading()
{
	SomeExamples();
}
