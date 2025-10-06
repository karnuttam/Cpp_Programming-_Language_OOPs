#include <iostream>
//using namespace std;

//forward declaration
class C2;
class C1{
    public:
    int value;
    void getData(int value){
        this -> value = value;
    }
    void display(){
        std::cout<<"The value is: "<<value<<std::endl;
    }
    friend void exchange(C1 &, C2 &);

};

class C2{
    public:
    int value;
    void getData(int value){
        this -> value =  value;

    }
    void display(){
        std::cout<<"The value is: "<<value<<std::endl;
    }
    friend void exchange(C1 &, C2 &);
};

void exchange(C1 & o1, C2 & o2){
    int temp = o1.value;
    o1.value = o2.value;
    o2.value = temp;
}

int main(){
    C1 a;
    C2 b;
    std::cout<<"Data before swapping"<<std::endl;
    a.getData(56);
    a.display();

    b.getData(23);
    b.display();

    std::cout<<"Data after swapping"<<std::endl;
    exchange(a , b);
    std::cout<<"The value of a is: ";a.display();
    std::cout<<std::endl;
    std::cout<<"The value of b is: ";b.display();
    std::cout<<std::endl;
    return 0;
}