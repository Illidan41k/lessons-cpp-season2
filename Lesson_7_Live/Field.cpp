#include "Field.h"
#include <iostream>

std::vector<std::vector<int>> GetEmptyField()
{
    std::vector<std::vector<int>> field{};

    for (size_t i = 0; i < FIELD_SIZE; i++)
    {
        std::vector<int> row{};

        for (size_t j = 0; j < FIELD_SIZE; j++)
        {
            row.push_back(0);
        }

        field.push_back(row);
    }

    return field;
}

void PrintField(const std::vector<std::vector<int>>& field)
{
    for (const auto& row : field)
    {
        for (const auto& element : row)
        {
            std::cout << element << " ";
        }

        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

std::vector<std::pair<int, int>> GetAllSuitedCoordinatesToPlaceVertical(const std::vector<std::vector<int>>& field, int decks)
{
    std::vector<std::pair<int, int>> suitedCoordinates{};

    for (size_t rowIndex = 0; rowIndex < FIELD_SIZE - decks + 1; rowIndex++) //A, Á, Â, Ã 
    {
        for (size_t columnIndex = 0; columnIndex < FIELD_SIZE; columnIndex++) //1, 2, 3, 4
        {
            bool suit = true;

            if (field[rowIndex][columnIndex] != 0)
            {
                suit = false;
            }

            for (size_t deckIndex = 0; deckIndex < decks; deckIndex++)
            {
                if (field[rowIndex + deckIndex][columnIndex] != 0)
                {
                    suit = false;
                }
            }

            if (suit)
            {
                suitedCoordinates.push_back(std::make_pair(rowIndex, columnIndex));
            }
        }        
    }

    return suitedCoordinates;
}

std::vector<std::pair<int, int>> GetAllSuitedCoordinatesToPlaceHorizontal(const std::vector<std::vector<int>>& field, int decks)
{
    return std::vector<std::pair<int, int>>{};
}

std::vector<std::pair<int, int>> GetAllSuitedCoordinatesToPlace(const std::vector<std::vector<int>>& field, ShipAlignment alignment, int decks)
{
    if (alignment == ShipAlignment::Vertical)
    {
        return GetAllSuitedCoordinatesToPlaceVertical(field, decks);
    }
    else
    {
        return GetAllSuitedCoordinatesToPlaceHorizontal(field, decks);
    }

}

void PlaceShip(std::vector<std::vector<int>>& field, ShipAlignment alignment, int decks, std::pair<int, int> coordinate)
{
    for (size_t deck = 0; deck < decks; deck++)
    {
        field[coordinate.first + deck][coordinate.second] = 1;
    }
}
