#include "InputHandler.h"
#include <iostream>

void OneTryInput()
{
	int number = 0;

	std::cin >> number;


	// ���� �������� �� ������������ �����. �� ��� ������������ ����� �����������.
	if (std::cin.good() == true)
	{
		std::cout << number << std::endl;
	}
	else
	{
		std::cout << "your input is wrong! " << std::endl;
	}
}

void InfiniteTriesInput()
{
	int number = 0;

	std::cin >> number;


	// ������������� ������ ��������� ���� ���� � ������������. ����� �������, ���� �� ����� ���������.
	while (!std::cin.good())
	{
		std::cout << "your input is wrong!" << std::endl;
		std::cout << "input a number please!" << std::endl;

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cin >> number;
	}

	std::cout << "success!" << std::endl;
	std::cout << number << std::endl;
}