# include <iostream>
//using namespace std;

class Complex{
    float real;
    float imag;
    
    public:
    Complex() : real(0), imag(0) {} // Default constructor
    Complex(float real, float imag){
        this -> real = real;
        this -> imag = imag;
    }
    Complex operator + (const Complex &other){
        Complex result;
        result.real = this-> real + other.real;
        result.imag = this -> imag + other. imag;
        return result;
    }
void display(){
    std::cout<<real<<" +"<<" i"<<imag<<std::endl;
}
};

//main function
int main(){
    Complex C1(3.2, 1.2);
    Complex C2(8.3, 9.5);
    Complex C3 = C1 + C2;
    C1.display();
    C2.display();
    C3.display();
    return 0;
}