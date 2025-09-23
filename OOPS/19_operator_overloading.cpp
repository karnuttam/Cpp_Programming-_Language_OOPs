// Operator overloading in C++ allows you to redefine or "overload" the way operators work for user-defined types (like classes and structs). This enables operators such as +,-,*,==,etc., to be used with objects just like with basic data types.

// Syntax of Operator Overloading

// return_type class_name::operator op (parameters){
// implementation
// }

/*
operator is the keyword.
op is  the operator symbol you want to overload (e.g.,+,-,==).
You define it either inside or outside the class.*/

#include <iostream>
// using namespace std;

// class to represent complex numbers
class Complex
{
private:
    float real; // Real part
    float imag; // Imaginary part

public:
    // Constructor to initialize complex number
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overloading the '+' operator
    Complex operator+(const Complex &other)//“Take another Complex object as input, by reference, and don’t allow it to be modified.”
    {
        // Create a temporary complex object to store the result
        Complex result;
        result.real = this->real + other.real; // Add real parts
        result.imag = this->imag + other.imag; // Add imaginary parts
        return result;
    }

    // Function to display the complex number
    void display()
    {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

// Main function

int main()
{
    // Creating two complex numbers
    Complex c1(3.2, 2.5);
    Complex c2(1.3, 4.7);

    // Adding the two complex numbers using overloaded '+' operator
    Complex c3 = c1 + c2;
    // Displaying the result
    std::cout << "First Complex Number: ";
    c1.display();

    std::cout << "Second complex Number: ";
    c2.display();

    std::cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}