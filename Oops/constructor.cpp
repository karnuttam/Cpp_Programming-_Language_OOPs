// Constructor
// 1. It is a special function that is invoked automatically at the time of object creation.

// 2. Name of the constructor should be same as class Name.

// 3. It doesn't have any return type

// 4. It is used to initialize the value.

// If we create more than multiple constructor then we called it as contructor overloading
// We cannot use constructor with same number of parameter
#include <iostream>

class customer
{
public:
    std::string name;
    double account_number;
    double balance;
    int code;
    double num;
    int *arr;

    // appearance of default constructor
    /**
    customer()
    {
        std::cout << "Default constructor created." << std::endl;
    };*/

    // We can initialize the constructor also
    customer()
    {
        name = "Rohit";
        account_number = 725496;
        balance = 548695;
        arr = new int[20];
    }
    // create paramaterized constructor
    customer(std::string a, double b)
    {
        name = a;
        account_number = b;
    }
    customer(std::string a, double b, double c)
    {
        name = a;
        account_number = b;
        balance = c;
    }

    // constructor using pointer
    customer(std::string name, double account_number, double balance, int code)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->code = code;
    }

    // inline constructor
    inline customer(std::string a, double b, double c, int d, double e) : name(a), account_number(b), balance(c), code(d), num(e)
    {
    }

    // function to show data
    void display()
    {
        std::cout << "Name: " << name << " " << "A/C Number: " << account_number << " " << "Balance: " << balance << " " << "Code: " << code << " " << "Number: " << num << std::endl;
    }

    // appearance of default copy constructor
    customer(customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

// main function
int main()
{
    customer c1;                                           //(uses without paramaterized constructor)
    customer c2("Raman", 4561289457, 4561);                //(uses three paramaterized constructor)
    customer c3("Raghav", 4561245689);                     //(uses two paramaterized constructor)
    customer c4("Ram", 4561236985, 7898, 897);             //(uses four paramaterized constructor)
    customer c5("Raju", 456, 2369789456, 785, 1234589654); //(uses five paramaterized constructor)
    customer c6(c1);                                       //(By creating default copy constructor )

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    return 0;
}
