// Exception handling in C++ is a mechanism used to handle runtime errors so that the normal flow of the program can be maintained.

// It is done using the keywords:
// try - defines a block of code to be tested for errors
// throw - throws an exception when an error is detected.
// catch - handles the exception.

//**Example: Bank system using exception handling in C++ */

#include <iostream>
// using namespace std; //Not used globally to avoid namespace pollution

class Customer
{
public:
    std::string name;
    long long account_number;
    float balance;

    // parametrized constructor to initialize data members
    Customer(std::string name, long long account_number, float balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    // Method to deposit money into the account
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << amount << " rupees is deposited in you bank account." << std::endl;
        }
        else
        {
            // std::cout << "Amount is not deposited successfully." << std::endl;
            throw "Amount is not deposited successfully.";
        }
    }
    // method to withdraw money from the account
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;

            std::cout << amount << " rupees is debited successfully." << std::endl;
        }
        else if (amount < 0)
        {
            // std::cout << "Amount should be greater than 0." << std::endl;
            throw "Amount should be greater than 0.";
        }
        else
        {
            // std::cout << "Insufficient balance!" << std::endl;
            throw "Insufficient balance!";
        }
    }
    void display()
    {
        std::cout << "Name: " << name << " " << "A/C Number: " << account_number << " " << "Balance: " << balance << std::endl;
    }
};

// main function
int main()
{
    Customer c1("Rohit Kukereja", 8564923695, 89562);
    c1.display();

    // After performing operations
    try
    {
        c1.deposit(456);
        c1.withdraw(123180);
    }
    catch (const char *e)
    {
        std::cout << "Exception occured: " << e << std::endl;
    }
    c1.display();
    return 0;
}
