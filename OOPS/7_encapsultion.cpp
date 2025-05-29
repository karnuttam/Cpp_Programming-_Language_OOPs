// Encapsulation is the concept of wrapping data(variables) and methods(functions) into a single unit called a class, and restricting access to certain components using access specifiers like private, protected, and public.

#include <iostream>
// using namespace std;

class employee
{
private: // default protection
    std::string name;
    long long account_number;
    double salary;
    int age;
    static int total_employee;

public:
    // initialize constructor
    employee(std::string name, int age, long long account_number, double salary)
    {
        this->name = name;
        this->age = age;
        this->account_number = account_number;
        this->salary = salary;
        total_employee++;
    };

    void display()
    {
        std::cout << "Employee name: " << name << "; " << "Age: " << age << "; " << "A/C Number: " << account_number << "; " << "Salary: " << salary << std::endl;
    }

    // functions for modification
    void updateAge(int newAge)
    {
        if (newAge >= 18)
        {
            age = newAge;
        }
        else
        {
            std::cout << "Invalid age entry!" << std::endl;
        }
    }

    void updateSalary(int newSalary)
    {
        if (salary >= 0)
        {
            salary = newSalary;
        }
        else
        {
            std::cout << "Invalid entry" << std::endl;
        }
    }

    static void showStat()
    {
        std::cout << "Total number of employee: " << total_employee << std::endl;
    }
};

int employee::total_employee = 0;
// main function
int main()
{
    std::cout << "-------------------------Employee Details---------------------" << std::endl;
    employee E1("Roit Kukreja", 45, 4865974895, 90000);
    employee E2("Raman Kumar", 50, 7894561235, 80000);
    employee E3("Raghav Chadha", 40, 9654895654, 85000);

    E1.updateAge(47);
    E1.updateSalary(95000);
    E1.display();
    E2.display();
    E3.display();

    employee::showStat();
    return 0;
}
