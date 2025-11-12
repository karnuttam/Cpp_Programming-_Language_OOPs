//Message passing means sending and receiving the information between objects
//When one object wants another objects to perform some tasks, it sends a message, which is basically a function call

#include <iostream>
//using namespace std;
class Student{
    public:
    std::string name;
    int roll;
    void displayInfo(std::string name, int roll){
        std::cout<<"Roll Number: "<<roll<<std::endl;
        std::cout<<"Name of student: "<<name<<std::endl;

    }
};

class Teacher{
    public:
    void sendMessage(Student &s){
        s.displayInfo("Uttam Singh", 3036);
    }
};

int main(){
    Student S1;
    Teacher T1;
    T1.sendMessage(S1);//Teacher sends Message to Student class
    return 0;
}