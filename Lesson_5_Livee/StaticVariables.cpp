#include "StaticVariables.h"
#include <iostream>

bool DealDamageToCharacter(int damage)
{
    static int hp = 250;

    hp -= damage;
    std::cout << "====================================" << std::endl;
    std::cout << "recieved damage: " << damage << std::endl;
    std::cout << "current hp: " << hp << std::endl;

    return hp > 0;
}


// 0 - 10000
//fraction = 0.0001
// 4567
//0.4567
//12.45353
//52

long GetRandomValue(int min, int max)
{
    double fraction = 1.0 / (static_cast<double>(RAND_MAX));

    return static_cast<long>(rand() * fraction * (max - min) + min);
}
