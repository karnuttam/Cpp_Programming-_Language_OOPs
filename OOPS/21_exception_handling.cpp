//Exception handling in C++ is a mechanism used to handle runtime errors so that the normal flow of the program can be maintained.

//It is done using the keywords:
//try - defines a block of code to be tested for errors
//throw - throws an exception when an error is detected.
//catch - handles the exception.

# include <iostream>
# include <stdexcept>
//using namespace std;
int main(){
    int num;
    int den;
    int result;
    std::cout<<"Enter the value of num:"<<std::endl;
    std::cin>>num;
    std::cout<<"Enter the value of den: "<<std::endl;
    std::cin>>den;

    try{
        if(den == 0){
            throw std::runtime_error("Error: Denomenator cannot be zero");
           
        }
         result = num/den;
         std::cout<<"Result: "<<result<<std::endl;
    }catch(std::runtime_error &e){
        std::cout<<e.what()<<std::endl;

    }
    std::cout<<"Program continues normally after exception handling"<<std::endl;

    return 0;
}