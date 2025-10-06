#include <iostream>
//using namespace std;
class Complex{
    public:
    float real;
    float imag;
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(float real, float imag){
        this -> real = real;
        this -> imag = imag;
    }
    Complex operator +(const Complex &other)const{
        Complex result;
        result.real = this -> real + other.real;
        result.imag = this -> imag + other.imag;
        return result;
    }
    void display(){
        std::cout<<"The value is: "<<real<<" + "<<imag<<"i"<<std::endl;
    }
};
int main(){
    Complex C1(78.5, 96.3);
    Complex C2(45.8, 86.4);
    C1.display();
    C2.display();
    Complex C3 = (C1 +  C2);
    C3.display();
    return 0;
}