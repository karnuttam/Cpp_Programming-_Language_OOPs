// Definition of Run Time Polymorphism in C++
// Run time polymorphism is a feature in C++ that allows a function to behave differently based on the object that is invoking it, at run time. It is achieved using inheritance and virtual functions.

// This is also known as dynamic dispatch or late binding, where the function call is resolved at runtime rather than compile time.

//**How it Works: */
// 1.The base class has a virtual function.
// 2.The derived class overrides that function.
// 3.A base class pointer (or reference) is used to call the function.
// 4.The function that gets called depends on the actual type of the object, not the type of the pointer/reference.

//*Example
#include <iostream>
// using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

// Derived class 1
class Dog : public Animal
{
public:
    void sound() override
    {
        std::cout << "Dog barks." << std::endl;
    }
};

// Derived class 2

class Cat : public Animal
{

public:
    void sound() override
    {
        std::cout << "Cat moves." << std::endl;
    }
};

// main function
int main()
{
    Animal *animal; // Base class pointer

    Dog d;
    Cat c;
    animal = &d;     // Base class pointer points to derived class onject
    animal->sound(); // Output: Dog barks.

    animal = &c;
    animal->sound(); // Output: Cat moves.

    return 0;
}

/**

🧠 Why Use override?
✅ Compile-time error checking

If you make a typo or the function signature does not exactly match the base class, the compiler will catch it.

✅ Improves code readability

Makes it clear to readers and maintainers that the function is overriding a virtual function.

*/

/*
What is an Abstract Class in C++?
Ans: An abstract class in C++ is a class that cannot be instantieated, meaning you cannot create objects of that class directly. It is designed to be inherited by other classes.

A class becomes abstract when it has at least one pure virtual function.


class Shape{
public:
   virtual void draw() = 0; //Pure vittual function
   };

   The = 0 syntax makes dram() a pure virtual function.
   Now shape is an abstract class.
   */