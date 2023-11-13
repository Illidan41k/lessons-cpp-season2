#pragma once
#include <vector>
#include <iostream>


struct Quaternion
{
	double x;
	double y;
	double z;

	double w;
};

class ManipulatorCalculations
{
public:
	ManipulatorCalculations(double x, double y, double z, double R, double P, double Y);

	ManipulatorCalculations(double x, double y, double z, const Quaternion& quaternion);

	void PrintCurrentState();
private:
	std::vector<double> m_jointStates{ 0.0, 0.0, 0.0, 0.0 };

};



void TestManipulatorCalcs();