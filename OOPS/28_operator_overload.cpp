#include <iostream>
//using namespace std;
class number{
    public:
    int num;
    number(int num){
        this -> num = num;
    }
    number operator +(const number &other){
        return number(this->num + other.num);
    }
    number operator -(const number &other){
        return number(this->num - other.num);
    }
    void display(){
        std::cout<<"The value of addition: "<<num<<std::endl;
    }
    number operator *(const number &other){
        return number(num * other.num);
        
    }

};

int main(){
    int num1, num2;
    std::cout<<"Enter the value of num1: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter the value of num2: "<<std::endl;
    std::cin>>num2;
    number n1(num1);
    number n2(num2);
    number n3 = (n1 + n2);
    number n4 = (n1 - n2);
    number n5 = (n1 * n2);
    n3.display();
    n4.display();
    n5.display();
    
    return 0;
    

}