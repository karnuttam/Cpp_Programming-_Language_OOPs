#include <iostream>
using namespace std;

// Base Class
class Account {
protected:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void display() {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: " << balance << endl;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double bal) {
        balance = bal;
    }
};

// Derived Class - Savings Account
class SavingsAccount : public Account {
public:
    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient Balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }
};

// Derived Class - Current Account
class CurrentAccount : public Account {
    const double minBalance = 1000;
    const double penalty = 100;
public:
    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient Balance!" << endl;
        else {
            balance -= amount;
            if (balance < minBalance) {
                cout << "Balance below minimum! Penalty of " << penalty << " applied." << endl;
                balance -= penalty;
            }
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }
};

// Main Function
int main() {
    int choice;
    cout << "Select Account Type:\n1. Savings Account\n2. Current Account\nEnter choice: ";
    cin >> choice;

    string name;
    int accNo;
    double bal;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> bal;

    if (choice == 1) {
        SavingsAccount sa;
        sa.createAccount(name, accNo, bal);

        int opt;
        double amount;
        do {
            cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\nEnter your choice: ";
            cin >> opt;
            switch (opt) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    sa.deposit(amount);
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    sa.withdraw(amount);
                    break;
                case 3:
                    sa.display();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (opt != 4);
    } 
    else if (choice == 2) {
        CurrentAccount ca;
        ca.createAccount(name, accNo, bal);

        int opt;
        double amount;
        do {
            cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\nEnter your choice: ";
            cin >> opt;
            switch (opt) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    ca.deposit(amount);
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    ca.withdraw(amount);
                    break;
                case 3:
                    ca.display();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (opt != 4);
    } 
    else {
        cout << "Invalid account type!" << endl;
    }

    return 0;
}