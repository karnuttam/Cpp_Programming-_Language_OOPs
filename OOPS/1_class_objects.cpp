// What is OOPs?
// Ans:OOPs stands for Object-Oriented Programming System.It is an approach or programming pattern where the programs are structured around object rather than function and logic.

// OOP makes code modular, reusable, and easier to manage by modeling real-world things as objects.

// pmr stands for Polymorphic memory resource
// std stands for standard
// iostream stands for input output stream

// What is object?
// Ans:It is an entity that has behaviour and state.Anything that exists in the physical world.

// Access modifier
// 1.Public 2.Private (default) 3.Protected

#include <iostream>
#include <string>

class student
{ // student is a user defined datatype
public:
    std::string name;
    int age, roll_no, marks;
    std::string grade;
};

// main function
int main()
{
    // s1, s2, s3 are objects
    student s1;
    student s2;
    student s3;

    std::cout << "Enter the name of student 1: " << std::endl;
    std::cin >> s1.name;
    std::cout << "Enter the roll_no. :" << std::endl;
    std::cin >> s1.roll_no;
    std::cout << "Enter the marks: " << std::endl;
    std::cin >> s1.marks;
    // std::cout <<"Enter the grade: "<< std::endl;
    // std::cin>> s1.grade;
    std::cout << "\n"
              << std::endl;
    std::cout << "Student's Details: " << std::endl;

    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll_No.: " << s1.roll_no << std::endl;
    std::cout << "Marks: " << s1.marks << std::endl;
    if (s1.marks >= 90)
    {
        std::cout << "Grade: 'A'" << std::endl;
    }
    else if (s1.marks >= 75)
    {
        std::cout << "Grade: 'B'" << std::endl;
    }
    else if (s1.marks >= 65)
    {
        std::cout << "Grade: 'C'" << std::endl;
    }
    else if (s1.marks >= 55)
    {
        std::cout << "Grade: 'D'" << std::endl;
    }
    else
    {
        std::cout << "Fail" << std::endl;
    }

    std::cout << "Enter the name of student 2: " << std::endl;
    std::cin >> s2.name;
    std::cout << "Enter the roll_no. :" << std::endl;
    std::cin >> s2.roll_no;
    std::cout << "Enter the marks: " << std::endl;
    std::cin >> s2.marks;
    // std::cout <<"Enter the grade: "<< std::endl;
    // std::cin>> s1.grade;
    std::cout << "\n"
              << std::endl;
    std::cout << "Student's Details: " << std::endl;

    std::cout << "Name: " << s2.name << std::endl;
    std::cout << "Roll_No.: " << s2.roll_no << std::endl;
    std::cout << "Marks: " << s2.marks << std::endl;
    if (s2.marks >= 90)
    {
        std::cout << "Grade: 'A'" << std::endl;
    }
    else if (s2.marks >= 75)
    {
        std::cout << "Grade: 'B'" << std::endl;
    }
    else if (s2.marks >= 65)
    {
        std::cout << "Grade: 'C'" << std::endl;
    }
    else if (s2.marks >= 55)
    {
        std::cout << "Grade: 'D'" << std::endl;
    }
    else
    {
        std::cout << "Fail" << std::endl;
    }

    return 0;
}