//Exception handling in C++ is a mechanism used to handle runtime errors so that the normal flow of the program can be maintained.

//It is done using the keywords:
//try - defines a block of code to be tested for errors
//throw - throws an exception when an error is detected.
//catch - handles the exception.

# include <iostream>
//using namespace std;

class Customer{
    public:
    std::string name;
    long long account_number;
    float balance;

    Customer(std::string name, long long account_number, float balance){
        
    }

};