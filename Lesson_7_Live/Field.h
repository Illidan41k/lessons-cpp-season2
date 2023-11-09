#pragma once
#include <vector>
#include <memory>
#include "RandomizerHelper.h"

const int FIELD_SIZE = 10;

std::vector<std::vector<int>> GetEmptyField();

void PrintField(const std::vector<std::vector<int>>& field);

std::vector<std::pair<int, int>> GetAllSuitedCoordinatesToPlace(const std::vector<std::vector<int>>& field, ShipAlignment alignment, int decks);

void PlaceShip(std::vector<std::vector<int>>& field, ShipAlignment alignment, int decks, std::pair<int, int> coordinate);