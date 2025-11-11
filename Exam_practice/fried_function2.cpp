#include <iostream>
class Complex;
class Calculator{
    public: 
    int a;
    int b;
    int add(int a, int b){
        this -> a = a;
        this -> b = b;
        return ( a + b);
    }

    friend int sumRealPart(Complex, Complex);
    friend int sumImagPart(Complex, Complex);
};

class Complex{
    public:
    int real;
    int imag;

    friend class Calculator;
    void setNumber(int real, int imag){
        this -> real = real;
        this -> imag = imag;
    }

    void display(){
        std::cout<<"Complex Number: "<<real<<" + "<<imag<<"i"<<std::endl;
    }
};

int sumRealPart(Complex o1, Complex o2){
    return (o1.real + o2.real);

}
int sumImagPart(Complex o1, Complex o2){
    return (o1.imag + o2.imag);
}

int main(){
    Calculator calc;
    int sum;
    sum = calc.add(65, 25);
    Complex C1;
    C1.setNumber(45, 36);
    C1.display();
    Complex C2;
    C2.setNumber(23,78);
      C2.display();
    std::cout<<"Sum of real part: "<<sumRealPart(C1, C2)<<std::endl;
    std::cout<<"Sum of imaginary Pat: "<<sumImagPart(C1, C2)<<std::endl;

    return 0;

}

