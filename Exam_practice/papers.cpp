#include <iostream>
//using namespace std;
/*
class Base{
    public:
    int a;
};
*/
class Base{
    public:
    virtual void display(){
        std::cout<<"Base class"<<std::endl;
    }

};
class Derived: public Base{
    void display(){
        std::cout<<"Derived class."<<std::endl;
    }

};
//int x = 20;

int main(){
    /*
    int x = 10;

    std::cout<<"The local variable x: "<<x<<std::endl;
    std::cout<<"The global variable x: "<<::x<<std::endl;

*/
/*
for(float i = 0.25; i <= 1; i = i + 0.25){
    //By default it will print significant value
    //std::cout<<std::fixed<<std::endl;
    //std::cout<<std::scientific<<std::endl;
    std::cout.precision(5);
    std::cout.width(7);
    std::cout.fill('#');
    std::cout<<i<<std::endl;
    std::cout.width(10);
    std::cout<<i*i<<std::endl;
}
    */
/*
    try{
        throw(x);

    }catch(int i){
        std::cout<<"The exception is caught by first catch."<<std::endl;
    }catch(int j){
        std::cout<<"The exception is caught by second catch."<<std::endl;
    }
        
*/
/*
    Base a1 = {10};
    Base a2 = a1;
    std::cout<<a1.a<<"\n"<<a2.a<<std::endl;
*/
Base *b =  new Derived();
b -> display();

try{

}catch(...){
    std::cout<<"Exception Throw";
}

    

    return 0;
}