#include <iostream>
//using namespace std;

class Complex{
    public:
    int real;
    int  imaginary;

    void setNumber(int real, int imaginary){
        this -> real = real ;
        this -> imaginary = imaginary;
    }
        void display(){
        std::cout<<"The sum of the complex number: "<<real<< " + "<<imaginary<<"i"<<std::endl;
    }

    friend Complex sumComplex(Complex obj1, Complex obj2);

};

Complex sumComplex(Complex obj1, Complex obj2){
    Complex obj3;
    obj3.setNumber((obj1.real + obj2.real), (obj1.imaginary + obj2.imaginary));
    return obj3;


}


int main(){
    Complex C1;
    C1.setNumber(45, 63);
    Complex C2;
    C2.setNumber(36, 78);
    Complex C3;
    C3 = sumComplex(C1 , C2);
    
    C3.display();

    return 0;

}
