// ✅ Definition of Multiple Inheritance:

// Multiple Inheritance is a feature in object-oriented programming where a class can inherit characteristics and behaviors (properties and methods) from more than one base class.

// This allows the derived class to access members of multiple parent classes, promoting reusability and modular design. However, it can also introduce complexity like the Diamond Problem (when two base classes have a common base).

#include <iostream>
// using namespace std;

// First base class
class Engine
{
public:
    Engine()
    {
        std::cout << "Engine constructor is called." << std::endl;
    }
    void startEngine()
    {
        std::cout << "Engine started." << std::endl;
    }
};

// Second base class

class MusicSystem
{
public:
    MusicSystem()
    {
        std::cout << "MusicSystem constructor is called." << std::endl;
    }
    void playMusic()
    {
        std::cout << "Music is playing." << std::endl;
    }
};
// Derived class inherating from both Engine and MusicSystem

class Car : public Engine, public MusicSystem
{
public:
    Car()
    {
        std::cout << "Car constructor is called." << std::endl;
    }
    void drive()
    {
        std::cout << "Car is moving." << std::endl;
    }
};

int main()
{
    Car myCar;
    myCar.startEngine(); // from Engine class
    myCar.playMusic();   // from MusicSystem
    myCar.drive();       // from Car

    return 0;
}
