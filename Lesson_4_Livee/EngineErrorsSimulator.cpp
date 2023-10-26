#include "EngineErrorsSimulator.h"
#include <iostream>
#include <sstream>
#include "WorkWithBitOperations.h"

std::ifstream OpenStream(const std::string& name)
{
    std::ifstream stream(name);

    if (!stream)
    {
        std::cerr << "file doesn't exist" << std::endl;
    }
    else
    {
        return stream;
    }
}

//00000000

char GetErrorBytes(std::ifstream& stream)
{
    std::string byteData;
    std::getline(stream, byteData);
    std::stringstream localStream;

    localStream << byteData;

    char result{ 0 };

    for (int i = 0; i < 8; i++)
    {
        int nextDigit{0};
        localStream >> nextDigit;

        if (localStream.fail())
        {
            std::cout << "something went wrong during reading bytes" << std::endl;
            return result;
        }

        //std::cout << "before shift <<" << std::endl;
        //PrintBitWithBinary(nextDigit);

        nextDigit = nextDigit << i;

       /* std::cout << "after shift <<" << std::endl;
        PrintBitWithBinary(nextDigit);*/
        result = result | nextDigit;

    }

    std::cout << "char result now is: " << std::endl;
    PrintBitWithBinary(result);

    return result;
}
