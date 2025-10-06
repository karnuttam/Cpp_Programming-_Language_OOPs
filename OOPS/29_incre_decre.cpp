#include <iostream>
//using namespace std;

class incre_decre{
    public:
    int num;
    incre_decre(int num){
        this -> num = num;
    }

    //prefix increment
    incre_decre operator ++(){
        ++num;
        return *this;
    }
    //prefix decrement
    incre_decre operator --(){
        --num;
        return *this;
    }
    //postfix increment
    incre_decre operator ++(int){
        incre_decre temp = *this;//store current state
        num++;//increment after
        return temp;//return old state
    }
    //postfix decrement
    incre_decre operator --(int){
        incre_decre temp = *this;//store current state
        num--;//decrement after;
        return temp;//return old state
    }
    void display(){
        std::cout<<"The value of num is: "<<num<<std::endl;
    }
};
int main(){
    int num;
    std::cout<<"Enter the value of num: "<<std::endl;
    std::cin>>num;
    incre_decre n(num);
    ++n;
    n.display();
    --n;
    n.display();
    n++;
    n.display();
    n--;
    n.display();
    return 0;

}