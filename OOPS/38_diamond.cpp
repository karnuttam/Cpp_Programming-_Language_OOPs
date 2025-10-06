#include <iostream>
//using namespace std;
class Base{
    public:
    std::string name;
    std::string branch;
    Base(std::string name, std::string branch){
        this -> name = name;
        this -> branch = branch;
        std::cout<<"Constructor called for base class"<<std::endl;
    }
    void display1(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Branch: "<<branch<<std::endl;
    }

};
class Derived1: virtual public Base{
    public:
    std::string sem;
    Derived1(std::string name, std::string branch, std::string sem):Base(name, branch){
        this -> sem = sem;

    }
    void display2(){
        std::cout<<"Semester: "<<sem<<std::endl;
    }
};
class Derived2: virtual public Base{
    public:
    int roll;
    Derived2(std::string name, std::string branch, int roll):Base(name, branch){
        this -> roll = roll;
    }
    void display3(){
        std::cout<<"Roll: "<<roll<<std::endl;
    }
};
class Derived3: public Derived1, public Derived2{
    public:
    int marks;
    Derived3(std::string name, std::string branch, std::string sem, int roll, int marks):Base(name, branch),Derived1(name, branch, sem), Derived2(name, branch, roll){
        this -> marks = marks;

    }
    void display4(){
        display1();
        display2();
        display3();
        std::cout<<"Marks: "<<marks<<std::endl;
    }

};
int main(){
    std::cout<<"Diamond Problem"<<std::endl;
    Base b("Uttam", "CSE");
    b.display1();
    Derived1 d1("Uttam","CSE", "third");
    d1.display2();

    Derived2 d2("Uttam", "CSE",123);
    d2.display3();
    Derived3 d3("Uttam", "CSE", "Second", 123, 99);
    d3.display4();
    return 0;
}