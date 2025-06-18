// Definition of File Handling in C++:
/*
File Handling in C++ refers to the process of creating, opening, reading, writing, and closing files usig built-in file stream classes provided by the <fstream> header.

It enables a C++ program to store and retrieve data from secondary storage (like text or binary files), rather than using only temeporary memory (RAM).
*/

// Example
#include <iostream>
#include <fstream> //Required for file handling

// using namespace std;

int main()
{
    // Writing to a file
    std::ofstream outfile("sample.txt"); // Creates or opens the file

    if (outfile.is_open())
    {
        outfile << "Hello, this is a file handling example in C++.\n";
        outfile << "You can write multiple lines like this.\n";

        outfile.close(); // Always close the file

        std::cout << "Data written successfully!" << std::endl;
    }
    else
    {
        std::cout << "Error opening file for writing!" << std::endl;
    }

    // Reading from the file

    std::ifstream infile("sample.txt"); // Open file for reading
    std::string line;

    if (infile.is_open())
    {
        std::cout << "\nReading from file:\n";
        while (getline(infile, line))
        {
            std::cout << line << std::endl; // Display each line
        }
        infile.close(); // Close after reading
    }
    else
    {
        std::cout << "Error opening file for reading!" << std::endl;
    }

    return 0;
}