/**
 What is a Custom Exception?
A custom exception is a user-defined class (usually derived from std::exception) that allows you to provide more meaningful error information.
 */

#include <iostream>
#include <exception> // Required for using std::exception base class
using namespace std;

//Custom Exception Class
// Inherits from std::exception to follow standard exception interface
class InsufficientBalanceException : public exception
{
public:
    // Override what() function to return a custom message
    const char *what() const noexcept override
    {
        return "Withdrawal failed: Insufficient balance.";
    }
};

// ✅ Bank Account Class
// Contains balance and withdrawal functionality with exception handling
class BankAccount
{
private:
    float balance; // Holds current balance

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance)
    {
        balance = initialBalance;
    }

    // Method to withdraw money
    void withdraw(float amount)
    {
        if (amount > balance)
        {
            // If requested amount is greater than balance, throw custom exception
            throw InsufficientBalanceException();
        }
        else
        {
            // Withdraw amount and update balance
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        }
    }

    // Display current balance
    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

//  Main function to test the functionality
int main()
{
    BankAccount acc(1000); // Creating account with ₹1000 balance
    acc.displayBalance();  // Show initial balance

    try
    {
        // Trying to withdraw ₹1500 (more than balance)
        acc.withdraw(1500);
    }
    catch (const InsufficientBalanceException &e)
    {
        // Catching and handling custom exception
        cout << "Exception caught: " << e.what() << endl;
    }

    // Final balance display after transaction attempt
    acc.displayBalance();

    return 0;
}
