//Dynamic Constructor
#include <iostream>
//using namespacce std;

class Student{
    public:
    std::string name;
    int roll;
    Student(std::string name = "", int roll = 0){
        this -> name = name;
        this -> roll = roll;

    }
    void display(){
        std::cout<<"Name of student: "<<name<<std::endl;
        std::cout<<"Roll Number: "<<roll<<std::endl;
    }
};

int main(){
    int n;
    std::cout<<"Enter the number of students: "<<std::endl;
    std::cin>>n;
    std::cin.ignore();

    Student *students = new Student[n];

    for(int i = 0; i < n; i++){
        std::cout<<"Enter the details of "<<i+1<<" student"<<std::endl;
        std::string name;
        int roll;
        std::cout<<"Enter the name: "<<std::endl;
        std::getline(std::cin, name);
        std::cout<<"Enter the roll: "<<std::endl;
        std::cin>>roll;
        std::cin.ignore();

        students[i] = Student(name, roll);
    }

    for (int i = 0; i < n ; i++){
        std::cout<<"The details of student"<<std::endl;
        students[i].display();
    }

    delete[] students;

    return 0;
}