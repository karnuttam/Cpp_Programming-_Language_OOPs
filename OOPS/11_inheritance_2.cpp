#include <iostream>
// using namespace std;

class Parent
{ // parent class
public:
    int car = 1; // Public: inherited as-if (if public inheritance)

protected:
    int house = 1; // Protected: accessible in child, not outside

private:
    int bankAccount = 1; // private: not inherited
};

// Public inheritance
class Son : public Parent
{ // child class
public:
    void display()
    {
        std::cout << "Car: " << car << std::endl; // accessible (public stays public)

        std::cout << "House: " << house << std::endl; // accessible (protected stays protected)

        // std::cout <<"Bank Account: "<< bankAccout; //Not accessible (private not inherited)
    }
};
// Private inheritance
class Daughter : private Parent
{
public:
    void display()
    {
        std::cout << "Car: " << car << std::endl;
        // accessible (but now private)
        std::cout << "House: " << house << std::endl; // accessible (but now private)
    }
};

int main()
{
    Son s;
    s.display();

    // Can access public member from outside
    s.car = 5; // ok
    // s.house = 5; //Error: protected
    // s.bankAccount = 5; Error: private

    Daughter d;
    d.display();
    // d.car = 3; Error: car is private in Daughter

    return 0;
}

/**inherited

📌 Summary:
Use public inheritance when the derived class "is a" base class.

Use protected/private inheritance when you want to restrict access and encapsulate behavior.

Private members are never inherited.

 */
