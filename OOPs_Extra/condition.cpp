# include <iostream>
//using nameplace std;

int main(){
    int a;
    int b;
    std::cout << "Enter the value of a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the value of b: "<< std::endl;
    std::cin>> b;

    if (a >= b){
        std::cout << "a is a valid number." << std::endl;
    }else{
        std::cout <<"a is not a valid number." <<std::endl;
    }
    return 0;
    }

