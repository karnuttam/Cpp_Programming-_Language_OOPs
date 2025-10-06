#include <iostream>
//using namespace std;
class Base{
    public:
    std::string name;
    std::string branch;
    Base(std::string name, std::string branch){
        this -> name = name;
        this -> branch = branch;
    }
    /*
    void getData(){
        std::cout<<"Enter the name: "<<std::endl;
        std::cin>>name;
        std::cout<<"Enter the branch: "<<std::endl;
        std::cin>>branch;

    }
        */
       void display(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Branch: "<<branch<<std::endl;
       }
    };
    
    class Derived: public Base{
        public:
        int roll;
        int age;
        Derived(std::string name, std::string branch, int roll, int age):Base(name, branch){}
        /*
        void getanother(){
            std::cout<<"Enter the roll: "<<std::endl;
            std::cin>>roll;
            std::cout<<"Enter the age: "<<std::endl;
            std::cin>>age;
        }
            */
        void displayAnother(){
            display();
            std::cout<<"Roll: "<<roll<<std::endl;
            std::cout<<"Age: "<<age<<std::endl;
        }
    };

    int main(){
        std::cout<<"Single level Inheritance"<<std::endl;
        Derived d("Ram", "CSE", 123, 23);
        //d.getData();
        //d.getanother();
        d.displayAnother();
        return 0;


    }
 
