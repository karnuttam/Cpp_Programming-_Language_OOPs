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
        if(b == 0 ){
        throw "Divisible by zero is not defined.";
        }
        else if(a <= -1000 || a >= 1000){
        
        throw "Exceeds limit";
        }else if(b <= -1000 || b >= 1000){
            throw "exceeds limit";
        }else{
        float result = (a/b);
        std::cout<<"The value of division is "<<result<<std::endl;
        }

    }catch(const char *msg){
        std::cout<<"Error: "<<msg<<std::endl;
    }
    /*
    catch(const char*msg){
        std::cout<<msg<<std::endl;
    }
    catch(const char *msg){
        std::cout<<msg<<std::endl;
    }
        */
    std::cout<<"Programs run smoothly"<<std::endl;
}