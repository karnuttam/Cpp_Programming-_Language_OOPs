#include <iostream>
//using namespae std;

class Customer{
    public:
    std::string name;
    int age;
    std::string bank_name;
    long long account_num;
    double balance;
    long long number;
    static int total_balance;
    static int total_customer;

    Customer(std::string name, int age, std::string bank_name, long long account_num, double balance, long long number){
        this -> name = name;
        this -> age = age;
        this -> bank_name = bank_name;
        this -> account_num = account_num;
        this -> balance = balance;
        this -> number = number;
        total_balance += balance;
        total_customer++;

    }
    //inline constructor
    inline Customer(std::string n, int a, std::string bank, long long acc):name(n), age(a), bank_name(bank), account_num(acc){
        std::cout<<"Inline constructor called"<<std::endl;
    }

    void deposit(double amount){
        if (amount > 0){
            balance = balance + amount;
            total_balance = total_balance  + amount;
            std::cout<<"amount is deposited successfully and the current amount is : "<<balance<<std::endl;
            
        }else{
            std::cout<<"Please enter the valid amount"<<std::endl;
        }

    }

    void withdraw(double amount){
        if (amount <= balance && amount > 0){
            balance = balance - amount;
            total_balance = total_balance - amount;
            std::cout<<"Withdrawal Amount is: "<<amount<<std::endl;
            std::cout<<"The remaining balance is: "<<balance<<std::endl;
        }else{
            std::cout<<"please enter the valid amount."<<std::endl;
        }
    }
    void display(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Bank_name:"<<bank_name<<std::endl;
        std::cout<<"Account Number: "<<account_num<<std::endl;
        std::cout<<"Balance: "<<balance<<std::endl;
        std::cout<<"Number: "<<number<<std::endl;

    }

    void updateAge(int newAge){
        if(newAge >= 18){
            age = newAge;
            std::cout<<"The new age is "<<age<<std::endl;
        }else{
            std::cout<<"Invalid entry"<<std::endl;
        }
    }
    static void showStats(){
        std::cout<<"Total Balance: "<<total_balance<<std::endl;
        std::cout<<"Total Customer: "<<total_customer<<std::endl;

    }


    //Copy constructor
    Customer(Customer &other){
        name = other.name;
        age = other.age;
        bank_name = other.bank_name;
        account_num = other.account_num;
        balance = other.balance;
        number = other.number;

    }
    ~Customer(){
        std::cout<<"Destructor for name: "<<name<<std::endl;

    }

};
int Customer::total_balance = 0;
int Customer::total_customer = 0;

int main(){
    Customer C1("Ram Kapoor", 25, "State Bank Of India", 1234567894, 1254, 4567891546);
    Customer C2("Raman", 23, "Punjab National Bank", 12456879, 5482, 458789545);
    Customer C3(C1);
    Customer C4("Ramesh Kumar", 24, "Union Bank", 1456123589, 0, 0);
    C1.updateAge(30);
    C1.display();
    C1.deposit(5000);
    C1.withdraw(4000);
    C2.display();
    C2.deposit(452);
    C2.withdraw(1200);
    C3.display();//Static members will not copied because only one copy of the static variable exists
    C4.display();
    Customer::showStats();

    return 0;

}