#include <iostream>
//using namespace std;
class Base1{
    public:
    std::string name;
    std::string branch;
    Base1(std::string name, std::string branch){
        this -> name = name;
        this -> branch = branch; 
    }
    /*
    void getData1(){
        std::cout<<"Enter the name: "<<std::endl;
        std::cin>>name;
        std::cout<<"Enter the branch: "<<std::endl;
        std::cin>>branch;

    }
        */
    void display1(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Branch: "<<branch<<std::endl;
    }
};

class Base2{
    public:
    int roll;
    int age;
    /*
    void getData2(){
        std::cout<<"Enter roll: "<<std::endl;
        std::cin>>roll;
        std::cout<<"Enter age: "<<std::endl;
        std::cin>>age;
    }
        */
       Base2(int roll, int age){
        this -> roll = roll;
        this -> age = age;
    
       }
    void display2(){
        std::cout<<"Roll: "<<age<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
    }
};
class Derived: public Base1, public Base2{
    public:
    int m1, m2, m3;
    /*
    void getMarks(){
        std::cout<<"Marks1: "<<std::endl;
        std::cin>>m1;
        std::cout<<"Marks2: "<<std::endl;
        std::cin>>m2;
        std::cout<<"Marks3: "<<std::endl;
        std::cin>>m3;

    }
        */
       Derived(std::string name, std::string branch, int roll, int age, int m1, int m2, int m3):Base1(name, branch), Base2(roll, age){
        this -> m1 = m1;
        this -> m2 = m2;
        this -> m3 = m3;
       }
    void displayAll(){
        display1();
        display2();
        std::cout<<"Marks1: "<<m1<<std::endl;
        std::cout<<"Marks2: "<<m2<<std::endl;
        std::cout<<"Marks3: "<<m3<<std::endl;
        
    }



};

int main(){
    std::cout<<"Multiple inheritance"<<std::endl;
    Derived d("Ram", "CSE", 123, 231, 98, 96, 95);
   // d.getData1();
   // d.getData2();
  //  d.getMarks();
    d.displayAll();
    return 0;
}