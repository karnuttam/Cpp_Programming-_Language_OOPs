// How to allocate memory dynamically in class
#include <iostream>
#include <string>
// using nameplace std;

class student
{
public:
    std::string name;
    int age;
    int roll_number;
    float marks;
};

// main function

int main()
{
    student *s = new student; // Dynamically memory allocation
    (*s).name = "Rohit";
    (*s).age = 12;
    (*s).roll_number = 3065;
    s->marks = 89.36;

    std::cout << s->name << std::endl;
    std::cout << (*s).marks << std::endl;
    std::cout << s->age << std::endl;

    return 0;
}