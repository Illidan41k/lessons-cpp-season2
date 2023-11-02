#include "TestEnums.h"
#include <iostream>

enum class Colors
{
	RED,
	WHITE,
	BLUE
};

enum class Feelings
{
	HAPPY,
	ANGRY,
	BLUE
};

void DrawREctangle(Colors color)
{
	//.....
}

void TestEnums()
{
	int a = 1;
	Colors currentPaintingColor = Colors::WHITE;

	DrawREctangle(currentPaintingColor);

	DrawREctangle(Colors::RED);

	std::cout << static_cast<int>(Colors::RED) << std::endl;


	Colors nextColor = static_cast<Colors>(2);


	if (nextColor == Colors::RED)
	{

	}
}
