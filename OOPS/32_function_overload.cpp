#include <iostream>
//using namespace std;
class Complex{
    public:
    float real;
    float imag;
    Complex(float real, float imag){
        this ->real = real;
        this -> imag = imag;
    }

    Complex add(const Complex &other){
        return Complex((real + other.real), (imag + other.imag));
    }
    Complex add(float x){
        return Complex(real + x, imag);
    }
    void display(){
        std::cout<<real<<" + "<<imag<<"i"<<std::endl;
    }

};
int main(){
    Complex C1(22.5, 66.3);
    Complex C2(56.3, 47.6);
    std::cout<<"C1"<<std::endl;
    C1.display();
    std::cout<<"C2"<<std::endl;
    C2.display();
std::cout<<"Addition of C1 and C2"<<std::endl;
    Complex C3 = C1.add(C2);
    C3.display();
    std::cout<<"Addition of realNumber in real part of Complex"<<std::endl;
    float realNum = 5.0;
    Complex C4 =  C1.add(realNum);
    C4.display();
    
    return 0;


}