#pragma once
#include <iostream>
#include <string>
#include <string>
#include <iomanip>

#define tab "    "
#define verticalDelimitter "|"



const std::string horizontalDelimitter("-----------------------------------------------------------------------------------------------------------------");

int Multiplication(int a, int b);

int MultiplicationWithoutCopy(int& a, int& b);


int AbstractFunction(int parameter);

int AbstractFunctionWithoutCopy(int& parameter);

void DoSomethingWithString(std::string& parameter);

/**
 * @brief This function calculates roots of equation with power 2. If there are no roots, doesn't calculate anything.
 * @param A A from formula Ax^2 +Bx +C.
 * @param B B from formula Ax^2 +Bx +C.
 * @param C C from formula Ax^2 +Bx +C.
 * @param root1 output parameter. Contains first of two roots.
 * @param root2 output parameter. Contains second of two roots.
 * @return True if there are roots, false otherwise.
*/
bool Roots(float A, float B, float C, float& root1, float& root2);

bool IsPowerOfTwo(double value);

void DataTypesInfo();


template<typename T>
void PrintDataType(T variable)
{
    std::cout << "type: " << std::setw(15) << typeid(variable).name() << verticalDelimitter << tab;
    std::cout << "size: " << sizeof(variable) << verticalDelimitter << tab;
    std::cout << std::setw(25) << std::numeric_limits<decltype(variable)>::min() << verticalDelimitter << tab;
    std::cout << std::setw(25) << std::numeric_limits<decltype(variable)>::max() << verticalDelimitter << tab;

    std::cout << std::endl;
    std::cout << horizontalDelimitter << std::endl;
    
}


void CheckOperationsOrder();


void Shift(unsigned int offset);

void TestUnary();