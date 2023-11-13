#include "ManipulatorCalculations.h"


ManipulatorCalculations::ManipulatorCalculations(double x, double y, double z, double R, double P, double Y)
{
	// matematics

	m_jointStates = std::vector<double>{ 0.3, 0.45, 0.7, -1.2 };
}

ManipulatorCalculations::ManipulatorCalculations(double x, double y, double z, const Quaternion& quaternion)
{
	// a bit another matematics

	m_jointStates = std::vector<double>{ 0.22, 0.45, 0.71, -1.27 };
}

void ManipulatorCalculations::PrintCurrentState()
{
	for (const auto& element : m_jointStates)
	{
		std::cout << element << "  ";
	}
	std::cout << std::endl;
}

void TestManipulatorCalcs()
{
	ManipulatorCalculations coordinates1(13., 12., 10., 60., 90., 53.);

	Quaternion quaternionForInit{};

	ManipulatorCalculations coordinates2(13., 12., 10., quaternionForInit);

	coordinates1.PrintCurrentState();
	coordinates2.PrintCurrentState();

}
