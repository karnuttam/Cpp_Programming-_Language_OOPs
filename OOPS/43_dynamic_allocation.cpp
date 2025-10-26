#include <iostream>
//using namespace std;
int main(){
    int *ptr = new int;
    *ptr = 50;
    std::cout<<"Value of *ptr: "<<*ptr<<std::endl;
    delete ptr;
/*
    A dangling pointer in C++ is a pointer that points to a memory location that has been deleted or deallocated. Accessing or using a dangling pointer leads to undefined behavior, which can crash your program or cause unexpected results   */ 
    ptr = nullptr;//safe now;
    std::cout<<*ptr<<std::endl;//Dangling pointer! undefined behavior

    return 0;
}