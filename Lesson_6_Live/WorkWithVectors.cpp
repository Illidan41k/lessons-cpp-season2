#include "WorkWithVectors.h"
#include <vector>
#include <iostream>


void PrintByTypeValue(std::vector<int> vector)
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	for (int i : vector)
	{
		std::cout << i << std:: endl;
	}
}

void PrintByAutoValue(std::vector<int> vector)
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	for (auto i : vector)
	{
		std::cout << i << std::endl;
	}
}

void PrintAndChangeElements(std::vector<int> vector)
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	for (auto &i : vector)
	{
		i += 1000;
		std::cout << i << std::endl;
	}

	for (auto i : vector)
	{
		std::cout << i << std::endl;
	}
}

void PrintWithoutChangingGaurantee(std::vector<int> vector)
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	for (const auto& i : vector)
	{
		std::cout << i << std::endl;
	}
}

void PrintByIterator(std::vector<int> vector)
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	//for (std::vector<int>::const_iterator i = vector.cbegin(); i != vector.cend(); ++i)
	for (auto i = vector.begin(); i != vector.end(); ++i) // c = const
	{
		std::cout << *i << std::endl;
	}
}

void PrintByOstream(std::vector<int> vector)
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	std::ostream_iterator<int> coutIterator(std::cout, ", ");

	std::copy(vector.cbegin(), vector.cend(), coutIterator);
}

void PrintVectorData(std::vector<int>& vector)
{
	std::cout << "size is: " << vector.size() << std::endl;
	std::cout << "capacity is: " << vector.capacity() << std::endl;
}

void TestVectorParams() // VERY VERY IMPORTANT!!
{
	std::vector<int> vector{};

	vector.reserve(100); //1

	PrintVectorData(vector);

	for (size_t i = 0; i < 8000; i++)
	{
		vector.push_back(i);
	}

	vector.shrink_to_fit(); //2

	PrintVectorData(vector);
}

void PrintByIndex(const std::vector<int> &vector) //лушая сигнатура из всех в этом файле
{
	std::cout << std::endl << __FUNCTION__ << std::endl;

	size_t elementsCout = vector.size();

	for (size_t i = 0; i < elementsCout; i++)
	{
		std::cout << i << " element is: " << vector[i] << std::endl;
	}
}

void AtVersusOperator()
{
	std::vector<int> testVector{ 2,4,6,7,8 };

	try
	{
		std::cout << testVector.at(9) << std::endl; //проверяет индекс
		std::cout << testVector[9] << std::endl; // не проверяет индекс 
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what();
	}
	
}

void TestVectors()
{
	std::vector<int> testVector1{5,6,7,8};
	std::vector<int> testVector2 = { 5,6,7,8,8,7,5,3,1,31,23,123,123,123,1,23 };

	std::vector<int> testVector{};

	testVector.push_back(4);
	testVector.push_back(5);
	testVector.push_back(88);
	testVector.push_back(666);

	PrintByTypeValue(testVector);
	PrintByAutoValue(testVector); 
	PrintAndChangeElements(testVector);
	PrintByIterator(testVector);
	PrintByOstream(testVector);
	PrintByIndex(testVector);

	std::cout << std::endl << "===========================" << std::endl;
	TestVectorParams();

	AtVersusOperator();

}
