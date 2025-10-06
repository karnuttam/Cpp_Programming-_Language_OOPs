#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outfile("Sample2.txt"); // creates a new file
    if (outfile.is_open())
    {
        outfile << "This is the example of file handling in c++" << std::endl;
        outfile << "I am learing to handle the file in C++" << std::endl;
        outfile << "You can write multiple of lines in file" << std::endl;
        outfile.close();
        std::cout << "Successfully created the file and write something" << std::endl;
    }
    else
    {
        std::cout << "Error happing while writing in file" << std::endl;
    }
    std::ifstream infile("Sample2.txt"); // For reading file
    std::string line;
    if (infile.is_open())
    {
        std::cout << "Reading the file" << std::endl;
        while (getline(infile, line))
        {
            std::cout << line << std::endl;
        }
        infile.close();
    }
    else
    {
        std::cout << "Error happening to read the file." << std::endl;
    }
    return 0;
}