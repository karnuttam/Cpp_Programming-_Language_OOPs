#include <iostream>
//using namespace std;
class FLOAT{
    public:
    float num;
    FLOAT(float num){
        this -> num = num;
    }
    FLOAT operator +(FLOAT &other){
        return (this -> num + other.num);
    }

    FLOAT operator -(FLOAT &other){
        return (this -> num - other.num);
    }

    FLOAT operator *(FLOAT &other){
        return (this -> num * other.num);
    }

    FLOAT operator /(FLOAT &other){
        return (this -> num / other.num);
    }
    void displayArithmetic(){
        std::cout<<"After performing arithmetic operatios: "<<num<<std::endl;
    }

};
class Compare{


    public:
    float value;
    Compare(float value){
        this -> value = value;
    }

    bool operator >(const Compare &other){
        return(this -> value > other.value);

    }
    bool operator <(const Compare &other){
        return (this-> value < other.value);
    }
    
    bool operator == (const Compare &other){
        return (this-> value == other.value);
    }

    bool operator >= (const Compare &other){
        return (this -> value >= other.value);
    }
    bool operator <= (const Compare &other){
        return (this -> value <= other.value);
    }
void display(){
    std::cout<<"The value is: "<<value<<std::endl;
}


};
int main(){
    std::cout<<"-----------All arithmetic Operations--------------"<<std::endl;
float val1, val2;
std::cout<<"Enter the value of: "<<std::endl;
std::cin>>val1;
std::cout<<"Enter the value of: "<<std::endl;
std::cin>>val2;
    FLOAT v1(val1);
    FLOAT v2(val2);
    FLOAT v3 = (v1 + v2);
    FLOAT v4 = (v1 - v2);
    FLOAT v5 = (v1 * v2);
    FLOAT v6 = (v1 / v2);
    
    v3.displayArithmetic();
      v4.displayArithmetic();
        v5.displayArithmetic();
          v6.displayArithmetic();
    std::cout<<"------------All comparisons operator--------------"<<std::endl;
    float value1;
    float value2;
    std::cout<<"Enter the value of num1: "<<std::endl;
    std::cin>>value1;
    std::cout<<"Enter the value of num2: "<<std::endl;
    std::cin>>value2;

    Compare n1(value1);
    Compare n2(value2);
    n1.display();
    n2.display();
    if(n1 > n2){
        std::cout<<"Number1 bigger than Number2  "<<value1<<std::endl;
    }else if(n1 < n2){
        std::cout<<"Number2 is bigger than Number1  "<<value2<<std::endl;
    }else{
        std::cout<<"Both values are same"<<std::endl;
    }

    //Demonstrate additional comparisons
    std::cout<<"Additional Comparisons: "<<std::endl;
    std::cout<<value1<<" >= "<<value2<<(n1 >= n2)<<std::endl;
    std::cout<<value1<<" <= "<<value2<<(n1 <=  n2)<<std::endl;
    return 0;
}