#include <iostream>
#include <fstream>
#include <string>

#include "DataTypesCast.h"
#include "TestAuto.h"
#include "LibraryOne.h"
#include "LibraryTwo.h"

#include "GlobalVariablesTypes.h"
#include "GlobalVariableUser.h"

#include "StaticVariables.h"

#include "TestEnums.h"

int globalVariable = 34;

void HelpFunction();


namespace Factory
{
	namespace BuilderPart
	{
		namespace Engine
		{
			int variable;
		}
	}
}


void ParseStream(std::istream& inputStream)
{
	while (inputStream.good())
	{
		std::string nextData{};
		inputStream >> nextData;

		std::cout << nextData << std::endl;
	}
}

int main()
{
	TestEnums();
	//while (DealDamageToCharacter(GetRandomValue(40, 70)))
	//{
	//	system("pause");
	//}

	/*CheckGlobalVar();
	CheckUserVariable();
	CheckGlobalVar();
	CheckUserVariable();
	CheckGlobalVar();
	CheckUserVariable();

	std::cout << GetUniqueIdForNextUser() << std::endl;
	std::cout << GetUniqueIdForNextUser() << std::endl;
	std::cout << GetUniqueIdForNextUser() << std::endl;
	std::cout << GetUniqueIdForNextUser() << std::endl;
	std::cout << GetUniqueIdForNextUser() << std::endl;
	std::cout << GetUniqueIdForNextUser() << std::endl;*/
	//TestAuto();

	//TestCasts();


	/*std::ifstream file("test.txt");

	ParseStream(std::cin);
	ParseStream(file);*/


	/*int a, b;
	float c, d;

	int globalVariable = 39;

	std::cout << globalVariable << std::endl;

	HelpFunction();*/


	///////////////////////

	/*int variable1 = 10;
	int variable2 = 25;
	std::cout << library_one::MathematicalFunction(variable1, variable2) << std::endl;
	std::cout << library_two::MathematicalFunction(variable1, variable2) << std::endl;*/

	//
	//namespace FactoryEngine = Factory::BuilderPart::Engine;

	//FactoryEngine::variable = 25;

	////...

	//std::cout << FactoryEngine::variable << std::endl;


}

void HelpFunction()
{
	//a = 3; //нет доступа сюда.

	std::cout << globalVariable << std::endl;
}