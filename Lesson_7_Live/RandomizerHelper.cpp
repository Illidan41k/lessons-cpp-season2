#include "RandomizerHelper.h"
#include <random>


ShipAlignment GetRandomAlignment()
{
	std::random_device seed;

	std::mt19937 randomGenerator(seed());

	std::uniform_int_distribution<int> choiser(0, 1);

	int randomChoise = choiser(randomGenerator);

	return static_cast<ShipAlignment>(randomChoise);
}

std::pair<int, int> GetRandomPoint(const std::vector<std::pair<int, int>>& variants)
{
	std::random_device seed;

	std::mt19937 randomGenerator(seed());

	std::uniform_int_distribution<int> choiser(0, variants.size() - 1);

	int randomChoise = choiser(randomGenerator);

	return variants[randomChoise];
}
