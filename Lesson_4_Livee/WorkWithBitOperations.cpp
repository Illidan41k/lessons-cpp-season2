#include "WorkWithBitOperations.h"
#include <bitset>
#include <iostream>


#define WATCH(x) std::cout << (x) << std::endl;

void TestBitOperatons()
{
	//int a = 1;
	//PrintBitWithBinary(a);
	//a = 2;
	//PrintBitWithBinary(a);
	//a = 3;
	//PrintBitWithBinary(a);
	//a = 4;
	//PrintBitWithBinary(a);
	//a = 5;
	//PrintBitWithBinary(a);
	//a = -5;
	//PrintBitWithBinary(a);

	// &, |, ^, ~, <<, >>

	//unsigned int first =  0b00110011;
	//unsigned int second = 0b00000101;
	//unsigned int result{};

	//PrintBitWithBinary(first);
	//PrintBitWithBinary(second);

	//std::cout << "--------------------------------------" << std::endl;
	////result = first & second;
	////result = first | second;
	//result = ~first;
	//PrintBitWithBinary(result);

	////////////////

	//unsigned int variable = 101;
	//PrintBitWithBinary(variable); 

	//unsigned int result = variable << 1;
	//PrintBitWithBinary(result);
	//result = variable << 2;
	//PrintBitWithBinary(result);
	//result = variable >> 1;
	//PrintBitWithBinary(result);

}

void PrintBitWithBinary(int parameter)
{
	std::bitset<CHAR_BIT * sizeof(parameter)> bitValue(parameter);
	WATCH(parameter);
	WATCH(bitValue);
}

void PrintBitWithBinary(char parameter)
{
	std::bitset<CHAR_BIT> bitValue(parameter);
	WATCH(bitValue);
}
