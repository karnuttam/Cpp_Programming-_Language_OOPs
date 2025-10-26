//What is a Pointer in C++?
//A pointer is a variable that stores the memory address of another variable.
//datatype *pointerName;

#include <iostream>
//using namespace std;
int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    int **pp = &ptr;
    int arr[10] = {10, 50, 452, 2};
    int *rr = &arr[0];

    std::cout<<"The value of a: "<<a<<std::endl;
    std::cout<<"The address of a: "<<&a<<std::endl;
    std::cout<<"The pointer ptr stores: "<<ptr<<std::endl;
    std::cout<<"Value pointed by pointer: "<<*ptr<<std::endl;//dereferencing
    std::cout<<"Address of pointer: "<<&ptr<<std::endl;
    std::cout<<"Value pointed bt double pointer: "<<**pp<<std::endl;
    std::cout<<"Value of array: "<<*rr<<std::endl;
    std::cout<<"Value of array: "<<*(arr + 1)<<std::endl;
    return 0;
}