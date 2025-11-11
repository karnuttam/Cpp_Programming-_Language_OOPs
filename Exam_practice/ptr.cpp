#include <iostream>
//using namespace std;

int main(){
    int a = 10;
    int b = 50;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int array[] = {56, 32,98, 47};
   // int *arr = &array[0];
   int *arr = array;
   int *arr2 = new int[5];

    std::cout<<"The value of *ptr1: "<<*ptr1<<std::endl;
    std::cout<<"The value of *ptr2: "<<*ptr2<<std::endl;
    std::cout<<"The address of a:" <<&a<<std::endl;
    std::cout<<"The address of b:"<<&b<<std::endl;
    //std::cout<<"The value of array[0]: "<<*arr<<std::endl;
    for (int i = 0; i < 4; i++){
        std::cout<<"The value of array: "<<arr[i]<<std::endl;
    }
    for(int i = 0; i < 5; i++){
       arr2[i] = i*10;
    }
    for(int i = 0; i < 5; i++){
        std::cout<<arr2[i]<<std::endl;;

    }
    delete[] arr2;

    arr2 = nullptr;
    return 0;
}