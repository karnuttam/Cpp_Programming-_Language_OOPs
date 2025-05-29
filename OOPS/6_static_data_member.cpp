/**
Q: What is a Static Data Member in C++?
Answer:

A static data member is a class-level variable that is shared among all objects of the class.

It is declared using the static keyword inside the class.

Only one copy of the static member exists, regardless of how many objects are created.

It is initialized outside the class definition (except in C++17 and later where you can use inline initialization).

It is initialized only once, before any object of that class is created (if accessed early).
*/

#include <iostream>

class customer
{
public:
    std::string bank_name;
    std::string name;
    long long account_number;
    std::string IFSC_code;
    long long balance;
    static int total_customers; // static data member declaration (common for everyone)
    static int total_balance;

    // create parametrized constructor to initialize
    customer(std::string bank_name, std::string name, long long account_number, const std::string &IFSC_code, long long balance)
    {
        this->bank_name = bank_name;
        this->name = name;
        this->account_number = account_number;
        this->IFSC_code = IFSC_code;
        this->balance = balance;
        total_customers++;
        total_balance += balance;
    }

    // function to display the data
    void display()
    {
        std::cout << "Bank Name: " << bank_name << "; " << "Name: " << name << "; " << "A/C Number: " << account_number << "; " << "IFSC Code: " << IFSC_code << "; " << "Balance: " << balance << std::endl;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }
    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    static void showStatics() // static member function
    {
        std::cout << "Total customer: " << total_customers << std::endl;

        std::cout << "Total Balance: " << total_balance << std::endl;
    }
};
// Definition & Initialization of static member outside the class
int customer::total_customers = 0;
int customer::total_balance = 0;

// main function
int main()
{
    customer c1("SBI Bank", "Rohit", 1234567890, "SBIN1254", 4561);
    customer c2("HDFC Bank", "Raghav", 1478549632, "HDFC4856", 7894);
    c1.deposit(5000);
    c2.withdraw(560);
    c1.display();
    c2.display();

    // called static function using class name
    customer::showStatics();

    return 0;
}