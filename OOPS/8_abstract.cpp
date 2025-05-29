// Abstraction is an OOP concept that means showing only essential features and hiding unnecessary implementation details from the user.
/**
In C++, abstraction is achieved using:

Classes (by exposing only relevant methods)

Access specifiers (private, protected, public)

Abstract classes and pure virtual functions (for full abstraction)
*/

// Basic abstraction using class
#include <iostream>
// using namespace std;

class Car
{
public:
    void startCar()
    {
        checkFuel();
        checkEngine();
        std::cout << "Car started!" << std::endl;
    }

private:
    void checkFuel()
    {
        std::cout << "Checking fuel..." << std::endl;
    }

    void checkEngine()
    {
        std::cout << "Checking engine..." << std::endl;
    }
};

// main function
int main()
{
    Car myCar;
    myCar.startCar(); // User only sees this simple interface

    // myCar.checkFuel(); X not allowed (private)
    // myCar.checkEngine(); X not allowed (private);

    return 0;
}