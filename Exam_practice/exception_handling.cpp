#include <iostream>
//using namespace std;

int main(){
    float a;
    float b;
    std::cout<<"Enter the value of a: "<<std::endl;
    std::cin>>a;
    std::cout<<"Enter the value of b: "<<std::endl;
    std::cin>>b;
     try{
        if(b == 0)
            throw "Division by 0 is not defined";
            float result = (a/b);
            std::cout<<"Value of Division is: "<<result<<std::endl;

        

     }catch(const char*msg){
        std::cout<<msg<<std::endl;

     }
     std::cout<<"Program run smoothly"<<std::endl;
    return 0;
}