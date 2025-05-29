#include <iostream>
#include <string>
int main()
{
    std::string str;
    std::cout << "Enter the string" << std::endl;
    // std::cin>>str;
    getline(std::cin, str);
    std::cout << "Entered string is :\n"
              << str << std::endl;

    return 0;
}