#include <iostream>

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n*factorial(n - 1);
    
    
}
int main(){
    int n;
    std::cout<<"Enter the value of n: "<<std::endl;
    std::cin>>n;
    int result = factorial(n);
    std::cout<<"The factorial of "<<n<<" is "<<result<<std::endl;

    return 0;
}