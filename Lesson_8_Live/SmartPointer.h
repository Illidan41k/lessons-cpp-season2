#pragma once
#include <iostream>

//RAII

class SmartPointer
{

public:
	SmartPointer() {};

	SmartPointer(int value)
	{
		std::cout << "object with value" << value << " initialized" << std::endl;
		m_data = new int(value);
	}

	~SmartPointer()
	{
		std::cout << "object with value" << *m_data << " deleted!" << std::endl;
		delete m_data;
		
	}

private:
	int* m_data;

};

