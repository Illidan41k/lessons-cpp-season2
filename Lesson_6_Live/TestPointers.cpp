#include "TestPointers.h"
#include <iostream>

void SimpleExample()
{
	int* a = new int{78};
	int* b{ nullptr };

	//многокода
	b = new int{ 45 };

	*a = 50;
	*b = *a + 20;

	std::cout << *a << "   " << *b << std::endl;
	
	delete a;
	delete b;
}

void GetAdress()
{
	int a = 10;

	int* pointerToA = &a;

	std::cout << "a value is " << a << std::endl;
	std::cout << "a adress in live is " << &a << std::endl;
	std::cout << "a adress is " << pointerToA << std::endl;
	std::cout << "a value under pointer is " << *pointerToA << std::endl;

	std::cout << "adress of a adress" << &pointerToA << std::endl;
}

void ChangeValue(int* pointer)
{
	*pointer += 10;
}

void PointersOnTheSameVariable()
{
	int A = 42;

	int* pointer1 = &A;
	int* pointer2 = &A;

	std::cout << A << std::endl;

	ChangeValue(pointer1);

	std::cout << A << std::endl;

	ChangeValue(pointer2);

	std::cout << A << std::endl;
}
//1 2 3 4 5 6 7 8 9 
// 

//0 1 2 3 4 5 6 7 8 9 A B C D E F
//1E

void ArrayExample()
{
	int mass[3] = { 4,7,9 };
	
	int* pointerToMass = mass;

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << *pointerToMass << std::endl;
		std::cout << pointerToMass << std::endl << std::endl;

		pointerToMass++;
	}
}

void DynamicArrayUsingPointers()
{
	int arraySize;

	std::cin >> arraySize;

	int* array = new int[arraySize] {};

	for (size_t i = 0; i < arraySize; i++)
	{
		array[i] = i * i;
	}

	for (size_t i = 0; i < arraySize; i++)
	{
		std::cout << array[i] << " ";
	}

	delete[] array;
}

void TestOldPointers()
{
	//SimpleExample();

	//GetAdress();

	//PointersOnTheSameVariable();

	//ArrayExample();

	DynamicArrayUsingPointers();
}
