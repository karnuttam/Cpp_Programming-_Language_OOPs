// Single inheritance is an object - oriented concept in which a derived (child)class inherits from one base (parent) class, allowing it to reuse and extend the functionality of the base class.

#include <iostream>
// using namespace std;//Typo

class Human
{          // Parent class
protected: // Accessible in derived class
    std::string name;
    std::string nationality;
    int age;

public:
    // Parameterized constructor
    Human(std::string name, std::string nationality, int age)
    {
        this->name = name;
        this->nationality = nationality;
        this->age = age;
    }

    // Public member function
    void prop()
    {
        std::cout << "I am working..." << std::endl;
    }
};
// Child class or Derived class inheriting from Human using public inheritance

class Student : public Human
{
    int roll_number;
    int fees;

public:
    // Constructor of student class

    // Student(std::string name, std::string nationality, int age, int roll_number, int fees)
    // {
    //     this->name = name;
    //     this->nationality = nationality;
    //     this->age = age;
    //     this->roll_number = roll_number;
    //     this->fees = fees;
    // }

    // Another method to create constructor of Student class using initializer list to call base class constructor
    Student(std::string name, std::string nationality, int age, int roll_number, int fees) : Human(name, nationality, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    // Member function to display student details
    void display()
    {
        std::cout << "Name" << "    " << "Nationality" << "    " << "Age" << "    " << "Roll NUmber" << "    " << "Fees" << std::endl;
        std::cout << name << "   " << nationality << "         " << age << "      " << roll_number << "           " << fees << std::endl;
    }
};

// main function
int main()
{
    // Human h;
    // h.prop();
    Student s1("Rohit", "Indian", 32, 485, 9000);
    s1.display();
    s1.prop(); // inherited from base class

    return 0;
}
