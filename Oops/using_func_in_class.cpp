#include <iostream>
#include <string>

class student
{
private: // default
    std::string Name;
    int roll_no;
    int marks;
    // By using function we can access from class inside class

public:
    void setName(std::string name)
    {
        if (name.size() == 0)
        {
            std::cout << "Invalid name." << std::endl;
            return;
        }
        Name = name;
    }
    void setRoll(int roll)
    {
        roll_no = roll;
    }
    void setMarks(int mark)
    {
        marks = mark;
    }

    void getName()
    {
        std::cout << "Name :" << Name << std::endl;
    }
    void getRoll()
    {
        std::cout << "Roll :" << roll_no << std::endl;
    }
    int getMarks()
    {
        int pin;
        std::cout << "Enter your pin to check marks: " << std::endl;
        std::cin >> pin;
        if (pin == 12345)
        {
            std::cout << "Correct Pin" << std::endl;
            std::cout << "Marks: ";
            return marks;
        }
        else
        {
            std::cout << "Invalid Pin" << std::endl;
            return -1;
        }
    }
};
// main function
int main()
{
    student s1;
    s1.setName("Rohit");
    s1.setRoll(89);
    s1.setMarks(99);

    s1.getName();
    s1.getRoll();

    std::cout << s1.getMarks() << std::endl;
    return 0;
}
