#include <iostream>
#include "RandomFunctions.h"
#include <iostream>


int main()
{
    //int a = 5;
    //int b = 4;

    //std::cout << Multiplication(a, b);

    //int paramToPass = 10;

    //std::cout << "initial value: " << paramToPass << std::endl;
    //AbstractFunction(paramToPass); 
    //AbstractFunctionWithoutCopy(paramToPass);

    //std::cout << "value after function: " << paramToPass << std::endl;
    
    //float root1{}, root2{};

    //bool areRootsEist = Roots(10, 2, 3, root1, root2);

    //if (areRootsEist)
    //{
    //    std::cout << root1 << "   " << root2 << std::endl;
    //}
    //else
    //{
    //    std::cout << "there are no roots" << std::endl;
    //}

    //std::cout << IsPowerOfTwo(254) << std::endl;

    //DataTypesInfo();

    //CheckOperationsOrder();

    //TestUnary();

    char userDecision = 'n';

    while (userDecision !='q')
    {
        std::cout << "1 - DataTypesInfo" << std::endl;
        std::cout << "2 - CheckOperationsOrder" << std::endl;
        std::cout << "q - quit" << std::endl;

        std::cin >> userDecision;

        /*if (userDecision == '1')
        {
            DataTypesInfo();
        }

        if (userDecision == '2')
        {
            CheckOperationsOrder();
        }

        if (userDecision == 'q')
        {
            break;
        }*/

        switch (userDecision)
        {
        case '1':
            DataTypesInfo();
            break;
        case '2':
            CheckOperationsOrder();
            break;
        default:
            break;
        }

        system("pause");
        system("cls");
    }

}

