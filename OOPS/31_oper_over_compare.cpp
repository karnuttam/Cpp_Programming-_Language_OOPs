#include <iostream>
//using namespace std;

class Compare{
    public:
    float value;
    public:
    Compare(float value){
        this -> value = value;
    }
    bool operator >(const Compare &other){
        //return bool((value*value) > (other.value*other.value));
        return((value*value) > (other.value*other.value));//No need to return type bool because it is a comparison operator
    }
    bool operator <(const Compare &other){
        return bool((value*value) < (other.value*other.value));

    }

    bool operator ==(const Compare &other){
        return bool((value*value) == (other.value*other.value));
    }

    void display(){
        std::cout<<"The value is: "<<value<<" and it's square is: "<<value*value<<std::endl;
    }

};

int main(){
    float n1, n2;
    std::cout<<"Enter the value of n1: "<<std::endl;
    std::cin>>n1;
    std::cout<<"Enter the value of n2: "<<std::endl;
    std::cin>>n2;
    Compare C1(n1);
    Compare C2(n2);
    C1.display();
    C2.display();

    if(C1 > C2){
        std::cout<<"The square value of C1 "<<C1.value*C1.value<<" is greater than the square value of C2"<<std::endl;
    }else if(C1 < C2){
        std::cout<<"The square value of C2 "<<C2.value*C2.value<<" is greater than the square value of C1"<<std::endl;
    }
    else{
        std::cout<<"The square value of C1 is equal to the square value of C2"<<std::endl;
    }

    return 0;

}

