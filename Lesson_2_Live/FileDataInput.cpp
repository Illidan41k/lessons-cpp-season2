#include <fstream>
#include <iostream>
#include <string>
#include "FileDataInput.h"


void TestWriteToFile()
{
	std::ofstream outputStream("test_data.txt");

	std::string someName = "Valery";
	outputStream << someName << " HELLO WORLD " << 23 << std::endl;
}

void WriteToDataBase()
{
	std::ofstream outputStream("EmployeeDataBase.txt", std::ios::app);

	std::string employeeName = "";

	std::cout << "Enter employee name please" << std::endl;
	std::cin >> employeeName;

	outputStream << employeeName << "; ";

	int age = 0;

	std::cout << "Enter employee age please" << std::endl;
	std::cin >> age;

	outputStream << age << " years old" << std::endl;
}

void ShowDataBase()
{
	std::ifstream inputStream("EmployeeDataBase.txt");

	if (!inputStream.is_open())
	{
		std::cout << "file doesn't exists" << std::endl;
	}

	std::string name = "";
	int age = 0;
	std::string additionalData = "";

	std::string nextRow = "";

	while (!inputStream.eof())
	{
		std::getline(inputStream, nextRow);

		if (nextRow != "")
		{
			std::cout << "next row: " << nextRow;
		}
		/*inputStream >> name;
		std::cout << name << " ";

		inputStream >> age;
		std::cout << age << " ";

		inputStream >> additionalData;
		std::cout << additionalData << " ";

		inputStream >> additionalData;
		std::cout << additionalData << " ";
		*/
		std::cout << std::endl;
	}
}

