#pragma once
#include <memory>
#include <vector>

enum class ShipAlignment
{
	Vertical = 0,
	Horizontal
};

ShipAlignment GetRandomAlignment();

std::pair<int, int> GetRandomPoint(const std::vector<std::pair<int, int>> &variants);