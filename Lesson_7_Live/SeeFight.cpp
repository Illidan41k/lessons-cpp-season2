#include "SeeFight.h"
#include "Field.h"
#include "RandomizerHelper.h"
#include <iostream>
#include <vector>

void MainFunction()
{
	auto field = GetEmptyField();

	PrintField(field);

	std::vector<int> allShipsToPlace{ 4,3,3,2,2,2,1,1,1,1 };

	// �����������!
	for (const auto& decks : allShipsToPlace)
	{
		//1) ����� ����-�����
		auto alignment = GetRandomAlignment();

		//2) ����� ��� ���������� ��� ����� ����� �� ����!

		auto allSuitedCoordinates = GetAllSuitedCoordinatesToPlace(field, ShipAlignment::Vertical, decks);

		auto coordinateToPlace = GetRandomPoint(allSuitedCoordinates);

		PlaceShip(field, ShipAlignment::Vertical, decks, coordinateToPlace);

		//std::cout << allSuitedCoordinates.size();
		PrintField(field);
		system("pause");
	}
}
