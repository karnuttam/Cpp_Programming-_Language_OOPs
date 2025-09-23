//Polymorphism is one of the core concepts of Object-Oriented Programming (OOP). It means "many forms" - the ability of a function, object, or operator to behave differently in different contexts.

//Polymorphism is the ability of an object to take on many forms. It allows the same interface to be used for different underlying data types or implementations.

//Types of polymorphism in C++
//1. Compile-time (static) 
//2. Run-time (Dynamic)


//1. Compile - time polymorphism 
//Description: Function overloading, Operator overloading
//Example: Same function name, different parameters

//2. Run - time polymorphism (Dynamic)
//Description: Achieved through virtual functions and inheritance
//Example: Base class pointer calling derived class method


//*Example of compile time polymorphism (function overloading)

# include <iostream>
// using namespace std;

class Area{
    public:
    int calculateArea(int length, int breadth){//Area of rectangle
        return length * breadth;
    }

    int calculateArea(int radius){//Area of circle
        return 3.14*radius*radius;

    }

};

//main function
int main(){
    Area A1, A2;
    std::cout<<"Area of a reactangle: "<<A1.calculateArea(5, 6)<<std::endl;

    std::cout <<"Area of a circle: "<<A2.calculateArea(5)<<std::endl;
    return 0;
}
/*
🎯 Why Use Polymorphism?
Code reusability
Flexibility and extensibility
Reduces complexity
*/

