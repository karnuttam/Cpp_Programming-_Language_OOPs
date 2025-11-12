#include <iostream>
#include <exception>//std::exception
//using namespace std;

class MyException:public std::exception{
    public:
    const char* what() const noexcept override{
        return "My custom Exception occured!";

    }

};
int main(){
    try{
        throw MyException();

    }catch(const MyException &e){
        std::cout<<"Caught Exception: "<<e.what()<<std::endl;
    }

    return 0;
}