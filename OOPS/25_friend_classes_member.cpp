#include <iostream>
//using namespace std;
//Forward Declaration
    class Complex;
class Calculator{
    

    public:
    int a, b;
    int add(int a, int b){
        this -> a = a;
        this -> b = b;
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumImagComplex(Complex, Complex);
};

class Complex{
    public:
    int a, b;
    //Individually declaring functions as friend
    //friend int Calculator::sumRealComplex(Complex , Complex );
   // friend int Calculator::sumImagComplex(Complex, Complex);
    //Alter: Declaring the entire Calculator class as friend
    friend class Calculator;
    void setNumber(int a, int b){
        this->a = a;
        this ->b = b;
    }
    void printNumber(){
        std::cout<<"The value is: "<<a<<" + "<<b<<"i"<<std::endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2){
    return(o1.a + o2.a);
}
int Calculator::sumImagComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

int main(){
    Complex C1, C2;
    Calculator sum;
    C1.setNumber(4, 5);
    C2.setNumber(6, 8);
    int resultReal = sum.sumRealComplex(C1, C2);
    std::cout<<"The result is: "<<resultReal<<std::endl;
    int resultImag = sum.sumImagComplex(C1, C2);
    std::cout<<"The result is: "<<resultImag<<std::endl;
    int resultAdd = sum.add(7, 8);
    std::cout<<"The addition of two number is: "<<resultAdd<<std::endl;

    return 0;

}