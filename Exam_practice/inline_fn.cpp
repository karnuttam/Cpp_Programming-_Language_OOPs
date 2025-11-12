//An inline function is a function in which the function call is replaces by the actual code of the function at compile time.

#include <iostream>
inline int square(int n){
    return n*n;
}
int main(){
    int n;
    std::cout<<"Enter the value of n: "<<std::endl;
    std::cin>>n;
    int result = square(n);
    std::cout<<"The square of n is: "<<result<<std::endl;
    return 0;
}