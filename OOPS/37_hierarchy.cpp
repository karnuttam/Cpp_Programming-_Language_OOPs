#include <iostream>
//using namespace std;
class Base{
    public:
    std::string name;
    std::string branch;
    Base(std::string name, std::string branch){
        this -> name = name;
        this -> branch = branch;
        std::cout<<"class Base constructor called."<<std::endl;


    }
    void display(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Branch: "<<branch<<std::endl;
    }

};
class Derived1: public Base{
    public:
    int roll;
    int age;
    Derived1(std::string name, std::string branch, int roll, int age):Base(name, branch){
        this -> roll= roll;
        this -> age = age;
        std::cout<<"Constructor called for Derived class."<<std::endl;

    }
    void display1(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Branch: "<<branch<<std::endl;
        std::cout<<"Roll: "<<roll<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
    }

};
class Derived2: public Base{
    public:
    std::string bank;
    int code;
    Derived2(std::string name, std::string branch, std::string bank, int code):Base(name, branch){
        this -> bank = bank;
        this -> code = code;
        std::cout<<"Constructor called for Derived2 class."<<std::endl;

    }
    void display2(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Branch: "<<branch<<std::endl;
        std::cout<<"Bank: "<<bank<<std::endl;
        std::cout<<"Code: "<<code<<std::endl;
    }

};
int main(){
    Derived1 d1("Ram", "Cse", 123, 21);
    d1.display1();
    Derived2 d2("Raman", "ECE", "SBI", 123);
    d2.display2();
    return 0;
}