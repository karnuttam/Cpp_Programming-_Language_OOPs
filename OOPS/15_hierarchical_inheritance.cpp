// Hierarchical Inheritance is a type of inheritace in which multiple derived (child) classes inherit from a single base (parent) class. This allows the child classes to reuse the properties and behaviors (data members and member functions) of the parent class.

#include <iostream>
// using namespace std;

// parent class
class Human
{
protected:
    std::string name;
    std::string nationality;
    int age;

public:
    // constructor
    Human(std::string name, std::string nationality, int age)
    {
        this->name = name;
        this->nationality = nationality;
        this->age = age;

        std::cout << "Human constructor called for " << name << std::endl;
    }
    void humanDisplay()
    {
        std::cout << "Name: " << name << "; " << "Nationality: " << nationality << "; " << "Age: " << age << std::endl;
    }
};

// Derived class 1
class Engineer : public Human
{
    std::string branch;
    std::string specialization;

public:
    Engineer(std::string name, std::string nationality, int age, std::string branch, std::string specialization) : Human(name, nationality, age)
    {
        this->branch = branch;
        this->specialization = specialization;
    }
    void showEngineer()
    {
        humanDisplay();
        std::cout << "Profession: Engineer" << std::endl;
        std::cout << "Branch: " << branch << "; " << "Specialization: " << specialization << std::endl;
    }
};

// Derived class 2
class Youtuber : public Human
{
    std::string subscriber;

public:
    Youtuber(std::string name, std::string nationality, int age, std::string subscriber) : Human(name, nationality, age)
    {
        this->subscriber = subscriber;
    }
    void showYutuber()
    {
        humanDisplay();
        std::cout << "Subscriber: " << subscriber << std::endl;
    }
};

// main function
int main()
{

    Human h("Rohit Kukreja", "Indian", 25);
    h.humanDisplay();

    Engineer E("Rohit Kukreja", "Indian", 25, "Computer Science", "AI");
    E.showEngineer();

    Youtuber Y("Meenakshi", "Indian", 20, "25K");
    Y.showYutuber();
    return 0;
}