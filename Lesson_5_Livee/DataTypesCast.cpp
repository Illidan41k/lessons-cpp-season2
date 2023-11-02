#include "DataTypesCast.h"
#include <iostream>

void TestCasts()
{
	bool a = false;

	char b = 'r';

	int c = 32;

	// ������� �����������
	// int result = a + b + c;

	// c-style  ��������������
	// int result = (int)a + int(b) + c;

	// �������������� � �������  static_cast
	int result = static_cast<int>(a) + static_cast<int>(b) + c;

	std::cout << result << std::endl;

	// const_cast
	// reinterpret_cast - ����� ������� ������
	// dynamic_cast 
}
