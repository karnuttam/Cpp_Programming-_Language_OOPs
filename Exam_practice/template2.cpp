#include <iostream>
//using namespace std;

template <typename T>
void swapValues(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10, b = 20;
    double x = 1.5, y = 3.5;
    std::cout<<"a = "<<a<<" and b = "<<b<<std::endl;
    std::cout<<"x = "<<x<<" and y= "<<y<<std::endl;

    swapValues(a, b);
    swapValues(x, y);
    std::cout<<"After swapping the value"<<std::endl;

    std::cout<<"a = "<<a<<" and b = "<<b<<std::endl;
    std::cout<<"x = "<<x<<" and y= "<<y<<std::endl;

    return 0;
    
}