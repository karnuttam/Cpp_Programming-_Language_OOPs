#include <iostream>
//using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int num1;
    int num2;
    std::cout<<"Enter num1: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter num2: "<<std::endl;
    std::cin>>num2;
    std::cout<<"Before swapping: "<<std::endl;
    std::cout<<"Num1: "<<num1<<std::endl;
    std::cout<<"Num2: "<<num2<<std::endl;
    std::cout<<"After swapping: "<<std::endl;
    swap(&num1, &num2);
    std::cout<<"Num1: "<<num1<<std::endl;
    std::cout<<"Num2: "<<num2<<std::endl;
    return 0;

}