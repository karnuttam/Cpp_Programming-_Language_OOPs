// Basics of code

#include <iostream>
// using namespace std;

int main()
{
    // std::cout << "I am a programmer...\n";
    std::cout << "I am a programmer..." << std::endl;
    int age = 25;
    std::cout << age << std::endl;
    std::cout << sizeof(age) << std::endl;

    float PI = 3.14;
    std::cout << PI << std::endl;
    std::cout << sizeof(float) << std::endl;

    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(bool) << std::endl;
    std::cout << sizeof(char) << std::endl;

    // converting data from one type to another
    // implicit conversion (done by compiler)
    char grade = 'S';
    int value = grade;
    std::cout << value << std::endl;

    // explicit typecasting (manually)
    double value_ = 259.23;
    int new_Value_ = (int)value_;
    std::cout << new_Value_ << std::endl;

    // Taking input
    int age_2;
    std::cout << "Enter the age: " << std::endl;
    std::cin >> age_2;
    std::cout << "Your age is: " << age_2 << std::endl;

    // Operators
    // 1.Arithmetic operators = +,-,*,/,%
    int a = 5;
    int b = 8;
    int sum = a + b;
    std::cout << sum << std::endl;

    // 2.Relational operators = <, >, <=, >=, ==, !=
    // It returns true or false;
    std::cout << (8 > 9) << std::endl; // false = 0;

    // 3.Logical operators = ||, &&, !

    //4.Binary operator has two operands
    //5.Unary operator has one operand (increment ++, decrement --)

    return 0;
}
