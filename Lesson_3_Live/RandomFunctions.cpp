#include "RandomFunctions.h"

int Multiplication(int a, int b)
{
    return a*b;
}

int MultiplicationWithoutCopy(int& a, int& b)
{
    return a * b;
}

int AbstractFunction(int parameter)
{

    //много полезного вычислительного кода

    parameter = parameter + 7;

    std::cout << "parameter in function: " << parameter << std::endl;
    return 0;
}

int AbstractFunctionWithoutCopy(int& parameter)
{

    //много полезного вычислительного кода

    parameter = parameter + 7;

    std::cout << "parameter in function: " << parameter << std::endl;
    return 0;
}

bool Roots(float A, float B, float C, float& root1, float& root2)
{
    float discr = B * B - 4 * A * C; 
    ///

    if (discr < 0) 
    {
        return false;
    }

    root1 = (-1 * B + sqrt(discr)) / (2 * A);

    root2 = (-1 * B - sqrt(discr)) / (2 * A);

    return true;
}


bool IsPowerOfTwo(double value)
{
    if (value == 1)
    {
        return true;
    }

    if (value > 1 && value < 2)
    {
        return false;
    }

    return IsPowerOfTwo(value / 2);
}

void DataTypesInfo()
{
    PrintDataType(int{});
    PrintDataType(unsigned int{});
    PrintDataType(long long{});
    PrintDataType(char{});
    PrintDataType(bool{});
    PrintDataType(short{});
    PrintDataType(int64_t{});
    PrintDataType(unsigned char{});
    PrintDataType(float{});
    PrintDataType(double{});
}

void Shift(unsigned int offset)
{
    //payload
    std::cout << offset << std::endl;
}

void TestUnary()
{
    Shift(+3);
    Shift(-3);
}

void CheckOperationsOrder()
{
    int b = 25;

    int c{ 20 };

    b += c;
    b += b; 
                

    std::cout << b << tab << c << std::endl;

    std::cout << horizontalDelimitter << std::endl;

    bool firstBool = true;
    bool secondBool = true;
    bool thirdBool = true;
    bool fourthBool = true;

    //std::cout << (firstBool && secondBool || thirdBool && fourthBool) << true; different results!!
   // std::cout << firstBool && secondBool || thirdBool && fourthBool << true; different results!!
}



