#include <iostream>
#include <cstring>
//using namespace std;

class Human{
    public:
    char name[20];
    int age;
    std::string nationality;

    Human(const char *name, int age, std::string nationality){
        strcpy(this -> name, name);
        this -> age = age;
        this -> nationality = nationality;
        std::cout<<"Constructor called for Human class"<<std::endl;

    }
    void displayHuman(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Nationality: "<<nationality<<std::endl;

    }

};

class Engineer: virtual public Human{
    public:
    std::string branch;
    std::string specialization;
    Engineer(const char *name, int age, std::string nationality, std::string branch, std::string specialization):Human(name, age, nationality){
        this -> branch = branch;
        this -> specialization = specialization;
    }
    void displayEngineer(){
        displayHuman(),
        std::cout<<"Branch: "<<branch<<std::endl;
        std::cout<<"Specialization: "<<specialization<<std::endl;
    }

};

class Youtuber: virtual public Human{
    public: 
    std::string channel;
    std::string subscribers;

    Youtuber(const char *name, int age, std::string nationality, std::string channel, std::string subscribers):Human(name, age, nationality){
        this -> channel = channel;
        this -> subscribers = subscribers;

    }

    void displayYoutuber(){
        displayHuman(),
        std::cout<<"Channel Name: "<<channel<<std::endl;
        std::cout<<"Total Subscribers: "<<subscribers<<std::endl;
    }


};

class Multitask: public Engineer, public Youtuber{
    public:
    std::string socialWork;
    std::string ngoOwner;
    Multitask(const char *name, int age, std::string nationality, std::string branch, std::string specialization, std::string channel, std::string subscribers, std::string socialWork, std::string ngoOwner):Human(name, age, nationality),Engineer(name, age, nationality, branch, specialization),Youtuber(name, age, nationality, channel, subscribers){
        this -> socialWork = socialWork;
        this -> ngoOwner = ngoOwner;
    }
    void displayMultitask(){
        displayEngineer(),
        displayYoutuber(),
        std::cout<<"Social Working: "<<socialWork<<std::endl;
        std::cout<<"The Name of Ngo: "<<ngoOwner<<std::endl;


    }
};


int main(){
    Multitask M1("Ram Kapoor",30, "Indian", "CSE", "Artificial Intelligence", "Growing India", "456K", "Running Ngo", "Welfare Sociaty");
    M1.displayMultitask();
    return 0;

}