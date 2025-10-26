#include <iostream>
using namespace std;

class Account {
public:
    string name;
    double acc_num;
    double balance;

    void createAcc(string name, double acc_num, double balance) {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
    }

    void display() {
        cout << "Name of A/C holder: " << name << endl;
        cout << "A/C Number: " << acc_num << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Balance deposited successfully." << endl;
        } else {
            cout << "Please enter a valid amount." << endl;
        }
        cout << "Current balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Remaining balance: " << balance << endl;
        }
    }
};

class CurrentAccount : public Account {
public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Balance deposited successfully." << endl;
        } else {
            cout << "Please enter a valid amount." << endl;
        }
        cout << "Current balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Remaining balance: " << balance << endl;
        }
    }
};

int main() {
    int choice;
    cout << "--------------Account-----------------" << endl;
    cout << "1. Savings Account" << endl;
    cout << "2. Current Account" << endl;
    cin >> choice;

    string name;
    double acc_num;
    double balance;

    if (choice == 1) {
        SavingsAccount sa;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter A/C Number: ";
        cin >> acc_num;
        cout << "Enter Balance: ";
        cin >> balance;

        sa.createAcc(name, acc_num, balance);

        int opt;
        double amount;
        do {
            cout << "\n---------Operations on Account-------------" << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit" << endl;
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
                    cout << "Account details:" << endl;
                    sa.display();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (opt != 4);

    } else if (choice == 2) {
        CurrentAccount ca;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter A/C Number: ";
        cin >> acc_num;
        cout << "Enter Balance: ";
        cin >> balance;

        ca.createAcc(name, acc_num, balance);

        int opt;
        double amount;
        do {
            cout << "\n---------Operations on Account-------------" << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit" << endl;
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
                    cout << "Account details:" << endl;
                    ca.display();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (opt != 4);

    } else {
        cout << "Invalid account type!" << endl;
    }

    return 0;
}
