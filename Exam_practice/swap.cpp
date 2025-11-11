#include <iostream>
class C2;
class C1{
    public: 
    int value;
    C1(int value){
        this  -> value = value;

    }
    void display(){
        std::cout<<"The value is "<<value<<std::endl;
    }
    friend void exchange(C1 &, C2&);
};
class C2{
    public: 
    int value;
    C2(int value){
        this -> value = value;

    }
    void display(){
        std::cout<<"The value is "<<value<<std::endl;

    }
    friend void exchange(C1 &, C2&);
};

void exchange(C1 &o1, C2 &o2){
    int temp = o1.value;
    o1.value = o2.value;
    o2.value = temp;
}

int main(){
    C1 c1(56);
    c1.display();
    C2 c2(36);
    c2.display();
    exchange(c1, c2);
    std::cout<<"The exchanged value is: "<<std::endl;
    c1.display();
    c2.display();

    return 0;
}