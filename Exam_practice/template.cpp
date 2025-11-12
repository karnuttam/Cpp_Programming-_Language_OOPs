#include <iostream>
//using namespace std;

template <class T>
T getMax(T a, T b){
    return (a > b ?a:b);
}


int main(){

    std::cout<<"The larger value in 10 and 20 is: "<<getMax(10, 20)<<std::endl;
    std::cout<<"The  larger value in 1.5 and 2.6 is: "<<getMax(1.5, 2.6)<<std::endl;
    std::cout<<"The larger character in A and B is: "<<getMax('A', 'B')<<std::endl;

    return 0;
}