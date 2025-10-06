#include <iostream>
//using namespace std;

class Customer{
    public:
    std::string name;
    std::string bank;
    double balance;
    double num;
    int code;
    int *arr;

    //Constructor without parameter
    Customer(){
        name = "Rohit Sir";
        bank = "State Bank of India";
        balance = 89546;
        num = 265489;
        code = 1234;
        arr = new int[20];
        std::cout<<"Default Constructor initialized"<<std::endl;
    }

    //Constructor with parameter
    Customer(std::string n, std::string b){
        name = n;
        bank = b;
        balance = 0;
        num = 0;
         code = 0;
         arr = new int[20];
        std::cout<<"constructor with parameter initialized"<<std::endl;
        
    }

    //Constructor initialization with 3 parameter
    Customer(std::string name, std::string bank, double balance){
        this -> name = name;
        this -> bank = bank;
        this -> balance = balance;
        num = 0;
        code = 0;
        arr = new int[20];
        std::cout<<"Constructor initialization with 3 called"<<std::endl;
    }
   
    //Inline constructor
    Customer(std::string n, std::string b, double bal, double num, int c):name(n), bank(b), balance(bal), num(num), code(c){
        std::cout<<"Inline constructor called"<<std::endl;
    }

    //Copy Constructor
    Customer(const Customer &other){
        name = other.name;
        bank = other.bank;
        balance = other.balance;
        num = other.num;
        code = other.code;
        arr = new int[20];//Allocate new memory
    }
     //Destructor called
    ~Customer(){
        delete[] arr;
        std::cout<<"Destructor called for name: "<<name<<std::endl;
    }
    void display(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Bank: "<<bank<<std::endl;
        std::cout<<"Balance: "<<balance<<std::endl;
        std::cout<<"Number: "<<num<<std::endl;
        std::cout<<"Code: "<<code<<std::endl;

    }

};

int main(){
    Customer C1;
    Customer C2("Uttam Singh", "State Bank of India");
    Customer C3("Raman", "SBI", 4561);
    Customer C4("Raghav", "Kotak", 1562, 245632, 1254);
    Customer C5(C4);
    Customer C7;
    C7 = C3;

    C1.display();
    C2.display();
    C3.display();
    C4.display();
    C5.display();
    C7.display();

    return 0;

}