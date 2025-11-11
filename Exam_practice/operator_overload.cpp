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

    Complex operator +(const Complex &other){
        Complex result;
        result.real = this-> real + other.real;
        result.imag = this -> imag + other.imag;
        return result;
    }

    void display(){
        std::cout<<"Complex value after operator overloading: "<<real<<" + "<<imag<<"i"<<std::endl;
    }
};
class incre_decre{
    public:
    int num;
    incre_decre(int num){
        this -> num = num;
    }
//pre increment
    incre_decre operator ++(){
        ++num;
        return *this;

    }

    //pre decrement 
    incre_decre operator --(){
        --num;
        return *this;
    }

    //post increment
    incre_decre operator ++(int){
        incre_decre temp = *this;
        num++;
        return temp;
    }
    //post decrement
    incre_decre operator --(int){
        incre_decre temp = *this;
        num--;
        return temp;
    }

    void display(){
        std::cout<<"Number:  "<<num<<std::endl;
    
    }
};

class Compare{
    public:
    float num1;
    float num2;
    Compare(float num1){
        this -> num1 = num1;

    }
    bool operator > (const Compare &other){
        return ((this -> num1)>(other.num1));

    }
    bool operator < (const Compare &other)
{
    return ((this -> num1) < (other.num1));
}
bool operator ==(const Compare &other){
    return (this -> num1 == other.num1);
}

void display(){
    std::cout<<"Number :"<<num1<<std::endl;

}
};

int main()
{
    Complex C1(54, 36);
    Complex C2(36, 98);
    Complex C3 = (C1 + C2);
    C1.display();
    C2.display();
    C3.display();

    incre_decre n1(56);
    incre_decre n2(87);
    --n1;
    n1.display();
    ++n1;
    n1.display();
    n2++;
    n2.display();
    n2--;
    n2.display();

    Compare num1(56);
    Compare num2(63);
    if(num1 > num2){
        std::cout<<"Num 1 is greater than num 2"<<std::endl;
    }else if(num1 < num2){
        std::cout<<"Num 2 is greater"<<std::endl;
    }else{
        std::cout<<"Both are equal"<<std::endl;
    }
    if (num1 == num2){
        std::cout<<"Both are equal"<<std::endl;
    }else{
       std::cout<<"Both are not equal"<<std::endl;
    }

    return 0;

}