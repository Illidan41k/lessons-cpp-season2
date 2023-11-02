#include "TestArrays.h"
#include <iostream>
#include <array>

void SimpleArrayExample()
{
	int mass[5]; // 0, 1, 2, 3, 4 - ������� �������

	for (int i = 1; i < 6; i++)
	{
		mass[i-1] = i * 2;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << mass[i] << " ";
	}
}

constexpr int StartArraySize()
{
	//������� ���������� 
	return 23;
}

void CorrectAndIncorrectInitialization()
{
	int mass[5]; //�������

	const int N = 42; 
	int mass2[N]; // ����������� ����������
	int mass3['W'];
	//size_t; - ������� ��� ������ ��� ��������������
	int mass4[StartArraySize()];

	////////////

	int n = 41;

	//int uncorrectMass[n]; ������!
	//int uncorrectMass2[0]; ������! ������ 0
	//int uncorrectMass3["W"]; ������! �� char
	//auto uncorrectArray4[2] = {1,2}; �� �������� ���
}

void PrintCStyleString(char string[], int elementsCount)
{
	//int stringSize = sizeof(string); ��� �� ��, ��� �� �������.

	for (size_t i = 0; i < elementsCount; i++)
	{
		std::cout << string[i] << std::endl;
	}
}

void PrintCStyleStringVersionTwo(char(&testArray)[4])
{
	int length = std::size(testArray);

	for (size_t i = 0; i < length; i++)
	{
		std::cout << testArray[i] << std::endl;
	}
}

void CStyleStringArray()
{
	char testString[]{ "qwe" };

	int length = std::size(testString);

	std::cout << "our string is " << testString << std::endl;
	std::cout << length << std::endl;

	PrintCStyleString(testString, length-1);

	std::cout << "=========================" << std::endl;

	PrintCStyleStringVersionTwo(testString);
}

void TwoDimensionsArrays()
{
	int matrix[5][6]{};

	int indexRow = 4;
	int indexColumn = 3;

	matrix[3][2] = 12;
	matrix[indexRow][indexColumn] = 12;

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			std::cout << matrix[i][j] << " ";
		}

		std::cout << std::endl;
	}
}

void SimplifyArraysInitialization()
{
	int matrixOne[6][7]{};
	int matrixTwo[6][7]{};
	int matrixThree[6][7]{};

	using MatrixType = int[6][7];

	MatrixType A{}, B{}, C{}, D{};

	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			std::cout << A[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void RandomExamplesCStyleStrings()
{
	char string[] = "Dima";

	//string[4] = 's';

	std::cout << string << std::endl;
	int length = std::size(string);
	std::cout << "lenght is: " << length << std::endl;
	std::cout << "old lenght calculation is: " << strlen(string) << std::endl;

	char string2[256];

	std::cin.getline(string2, 256);
	//std::cin >> string2; //�� �����!

	std::cout << "entered string is: " << string2 << std::endl;
}


void TestOldArrays()
{
	//SimpleArrayExample();

	//CorrectAndIncorrectInitialization();

	//CStyleStringArray();

	//TwoDimensionsArrays();

	//SimplifyArraysInitialization();

	RandomExamplesCStyleStrings();
}

void PrintStdArray(std::array<int, 4>& arr)
{
	for (auto& element : arr)
	{
		std::cout << element << std::endl;
	}
}

void StdArrayInitialization()
{
	std::array<int, 8> testArray;

	testArray[0] = 4;
	testArray[4] = 5;

	std::array<int, 8> testArray2 = {3,4,5,6,7,8,9,10}; //������ �������������

	std::array<int, 4> testArray3{ 3,4,5,6 }; //uniform-�������������
}



void TestNewArrays()
{
	StdArrayInitialization();
}
