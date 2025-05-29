#include <iostream>
#include <string>

class size
{
public:
    char a;
    char b;
    int c;
    // std::string name;
};

//[a, b, x, x, c, c, c, c ]// x = [padding]

// main function
int main()
{
    size value;
    // concept of padding
    std::cout << sizeof(value) << std::endl;

    return 0;
}

// How to allocate memory for class
// 1 byte allocate from multiple of 1
// 2 byte allocate from multiple of 2
// 3 byte allocate from multiple of 3
// 4 byte allocate from multiple of 4
// And the left spaces are padding
// By greedy approach
