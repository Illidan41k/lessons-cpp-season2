#include <iostream>
#include "HelperForIfElse.h"
#include "WorkWithBitOperations.h"
#include "EngineErrorsSimulator.h"

#define PRINTNAME(x) std::cout << (#x) << std::endl;

unsigned long long CountOnes(unsigned long long value)
{
    unsigned long long res = 0;

    while (value > 0)
    {
        std::cout << "iteration..." << std::endl;
        res += value & 1;
        value >>= 1;
    }

    return res;
}

unsigned long long CountOnesSmart(unsigned long long value)
{
    unsigned long long result{ 0 };

    while (value > 0)
    {
        // 000110100100 & 000110100011 = 000110100000
        // 000110100000 & 000110011111 = 000110000000
        std::cout << "iteration..." << std::endl;

        result++;
        value &= value - 1;
    }

    return result;
}

int main()
{
    std::cout << CountOnes(0b0010001010101010101001000100101001000001) << std::endl;
    std::cout << CountOnesSmart(0b0010001010101010101001000100101001000001) << std::endl;

    //TestTernary();
    //TestComparisonOperators();

    //TestBitOperatons();

    /*
    std::ifstream stream = OpenStream("engine_data.txt");

    char VoltageError = 0b00000001;
    char AngleLimitError = 0b00000010;
    char OverHeatingError = 0b00000100;
    char RangeError = 0b00001000;
    char CheckSumError = 0b00010000;
    char OverloadError = 0b00100000;
    char InstructionError = 0b01000000;
    char UnknownError = 0b10000000; //absent in documentation

    while (!stream.fail())
    {
        char result = GetErrorBytes(stream);

        //00101011

        //00101011 & 00000001 = 00000001

        if ((result & VoltageError) == VoltageError)
        {
            PRINTNAME(VoltageError);
            //std::cout << "VoltageError" << std::endl;
        }

        if ((result & AngleLimitError) == AngleLimitError)
        {
            PRINTNAME(AngleLimitError);
            //std::cout << "AngleLimitError" << std::endl;
        }

        if ((result & OverHeatingError) == OverHeatingError)
        {
            PRINTNAME(OverHeatingError);
            //std::cout << "OverHeatingError" << std::endl;
        }

        if ((result & RangeError) == RangeError)
        {
            PRINTNAME(RangeError)
        }

        if ((result & CheckSumError) == CheckSumError)
        {
            PRINTNAME(CheckSumError)
        }

        if ((result & OverloadError) == OverloadError)
        {
            PRINTNAME(OverloadError)
        }

        if ((result & InstructionError) == InstructionError)
        {
            PRINTNAME(InstructionError)
        }

        if ((result & UnknownError) == UnknownError)
        {
            
            std::cout << "UnknownError" << std::endl;
            std::cout << "Warning! it shouldn't happen ever. check engine well" << std::endl;
        }

        system("pause");
    }
    */



}


