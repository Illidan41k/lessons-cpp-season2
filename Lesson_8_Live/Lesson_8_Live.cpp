#include <iostream>

#include "Car.h"
#include "ManipulatorCalculations.h"
#include "Enemy.h"

#include "SmartPointer.h"
#include <memory>
#include "Logger.h"


int main()
{
    //WorkWithCar();

    //TestManipulatorCalcs();

    //Enemy enemy1{};
    //Enemy enemy2{};
    //Enemy enemy3{};
    //Enemy enemy4{};

    //enemy1.Info();
    //enemy2.Info();
    //enemy3.Info();
    //enemy4.Info();


    //try
    //{
    //    SmartPointer aPtr{ 43 };
    //    //
    //    //
    //    //error
    //    //
    //    //
    //    //
    //}
    //catch (const std::exception&)
    //{

    //}   


    Logger* logger = Logger::GetInstance("test1");

    Logger* logger2 = Logger::GetInstance("test2");

    auto logger3 = logger;

    logger->Log("first message");

    logger2->Log("second message");


    int a = 10;

    a = a;

    int a = 10;

    int b(a);
    
}
