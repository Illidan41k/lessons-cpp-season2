#pragma once
#include <string>

//public, private, protected

//constructor


class Car
{
public:
	Car() = default;
	Car(const std::string& title, int maxSpeed);

	int GetDistanceWithMaxSpeed(int seconds);

private:

	//Car() = default; // if we want to discard option for creation object without parameters.

	std::string m_title = "BMW";
	int m_currentSpeed{ 0 };
	int m_maxSpeed{ 25 };
};


void WorkWithCar();
