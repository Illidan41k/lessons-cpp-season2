#include <stdlib.h>
#include <iostream>

//using namespace std; // плохая практика
using std::cout;
using std::cin;
using std::endl;


int main()
{
	//restrict;
	//volatile;
	 
	
	//void variable; //нельзя так делать.

	
	// целочисленное
	int a = 34;

	// с плавающей точкой
	double b = 0.0; // 0.00000000000000000089
	float c = 53.2123f;


	////
	cout << " enter randrom digit, please!" << endl;

	int input = 0;

	cin >> input;

	cout << "you enteered " << input << endl;

	int result = input + a;
	cout << input  << "+" << a << "=" << result << endl;

	//std::cout << "hi!" << std::endl;

	system("pause");

	//+, -, *, /

	

	///////////////////////////////////модификаторы типов

	int variableTest = 89;

	//много-много кода...

	//variableTest = 3; //нельзя поменять из-за const.
	cout << variableTest << endl;


}


