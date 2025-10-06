#include <iostream>
//using namespace std;
//forward declaration
class Y;
class X{
    public:
    int value;
    void setValue(int value){
        this -> value = value;
    }
    void printValue(){
        std::cout<<"The value is: "<<value<<std::endl;
    }
    friend void add(X, Y);
};
class Y{
    public:
    int value;
    void setValue(int value){
        this -> value = value;
    }
    void printValue(){
        std::cout<<"The value is: "<<value<<std::endl;

    }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    std::cout<<"Summing data of X and Y objects give the answer: "<<o1.value + o2.value<<std::endl;

}

int main(){
    X a;
    Y b;
    a.setValue(89);
    b.setValue(56);
    add(a, b);

    return 0;

}
