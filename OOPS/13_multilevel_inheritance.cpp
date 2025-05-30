// Multilevel inheritance is a type of inheritance in which a class is derived from another class, which is itself derived from another class. This forms a chain of inheritance with multiple levels.

#include <iostream>
// using namespace std;

// Base (parent) class
class Person
{
protected:
    std::string name;
    int age;
    std::string gender;
    std::string nationality;

public:
    void setHumanData(std::string a, int d, std::string gen, std::string nat)
    {
        name = a;
        age = d;
        gender = gen;
        nationality = nat;
    }
    void displayHuman()
    {
        std::cout << "\nName: " << name << "\nAge: " << age << "\nNationality: " << nationality << "\nGender: " << gender << std::endl;
    }
};

// Derived (child) class
class Employee : public Person
{

protected:
    int employee_ID;
    std::string department;
    float salary;
    std::string designation;
    std::string join_date;

public:
    void setEmployee(int emp_ID, float sal, std::string dep, std::string design, std::string join)
    {
        employee_ID = emp_ID;
        salary = sal;
        department = dep;
        designation = design;
        join_date = join;
    }

    void displayEmployee()
    {
        displayHuman(); // call base class display
        std::cout << "\nEmployee_ID: " << employee_ID << "\nSalary: " << salary << "\nDepartment: " << department << "\nDesignation: " << designation << "\nJoin Date: " << join_date << std::endl;
    }
};

// Derived (child) class

class Manager : public Employee
{
protected:
    int teamSize;
    float bonus;
    std::string managedDepartment;
    int projectcount;

public:
    void setManager(int ts, float bo, std::string MD, int project)
    {
        teamSize = ts;
        bonus = bo;
        managedDepartment = MD;
        projectcount = project;
    }
    void displayManager()
    {
        displayEmployee(); // call intermediate class display
        std::cout << "\nTeam Size: " << teamSize << "\nBonus: " << bonus << "\nManager of Department: " << managedDepartment << "\nProject Count: " << projectcount << std::endl;
    }
};

// main function
int main()
{
    // Person p1;
    // p1.setHumanData("Rohit Kukreja", 39, "Male", "Indian");
    //  p1.displayHuman();
    Manager M1;
    M1.setHumanData("Rohit Kukreja", 39, "Male", "Indian");

    // Employee E1;
    // E1.setEmployee(5642, 85000, "Electronics", "Plant Manager", "22/08/2019");
    //  E1.displayEmployee();
    M1.setEmployee(5642, 85000, "Electronics", "Plant Manager", "22/08/2019");

    M1.setManager(48, 200.23, "Electrical Appliances", 13);

    std::cout << "==============Manager Details================" << std::endl;
    M1.displayManager();

    return 0;
}
