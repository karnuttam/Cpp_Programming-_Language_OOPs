//Write a C++ program to check whether the given number is prime or not
//The number greater than 1 that has exactly two divisors 1 and itself.

# include <iostream>
# include <math.h>
//using namespace std;
bool isPrime(int n){
    //negative number, 1 and 0 are not prime number
    if(n <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }
    //check divisibility upto sqrt(n)
    for (int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
        }
        return true;

    }


//main function
int main(){
    int number;
    std::cout<<"Enter the number to check whether the is prime or not: "<<std::endl;
    std::cin>>number;

    if(isPrime(number)){
        std::cout<<number<<" "<<"is a prime number."<<std::endl;

    }else{
        std::cout<<"The given number is not a prime number."<<std::endl;
    }
    return 0;

}