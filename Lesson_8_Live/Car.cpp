#include "Car.h"
#include <iostream>
#include <vector>


void WorkWithCar()
{
	int a = 1;

	Car firstCar;

	std::cout << "distance is: " << firstCar.GetDistanceWithMaxSpeed(5) << std::endl;

	Car secondCar{ "RedBull", 45 };
	Car thirdCar{ "VV", 13 };

	std::cout << "distance second car is: " << secondCar.GetDistanceWithMaxSpeed(5) << std::endl;
}

Car::Car(const std::string& title, int maxSpeed)
{
	m_title = title;
	m_maxSpeed = maxSpeed;
}

int Car::GetDistanceWithMaxSpeed(int seconds)
{
	return seconds * m_maxSpeed;
}
