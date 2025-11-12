#include <iostream>
//using namespace std;
class B;//forward declaration

class A{
    public:
    int a;
    A(int a){
        this -> a = a;
    }
        friend void add(A , B );

    
};
class B{
    public:
    int b;
    B(int b){
        this -> b = b;
        
    }
    friend void add(A, B);
};

void add(A obj1, B obj2){
    int result = obj1.a + obj2.b;
    std::cout<<"The addition of two different classes: "<<result<<std::endl;

}

int main(){
    A a(5);
    B b(6);
    add(a, b);
    return 0;

}