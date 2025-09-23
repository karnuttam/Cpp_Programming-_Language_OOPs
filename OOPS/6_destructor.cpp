//What is destructor?
//Ans: 1.It is an instant member function that is invoked automatically whenever an object is going to be destroyed.
//2.It is the last function that is going to be called before an object is destroyed.
//3.If you don't define one, the compiler provides a default destructor.
//    However, if you define your own, the compiler will not generate one

# include <iostream>

class customer{
    public:
    std::string name;
    int balance;
    int *data;

    //constructor run from top to bottom order
    //appearance of constructor which is created by compiler
    // customer(){
    //     std::cout <<"Constructor is created by compiler."<<std::endl;
    // }
    customer(std::string name, int bal){
        this -> name = name;
        data = new int(0);//Initialize data
        balance = bal;

        std::cout <<"Constructor called for name: "<<name <<std::endl;

    }
    

    //appearance of destructor which is created by compiler
 ~customer(){
         delete data;//deleted the dynamically created data to prevent memory leakage
        std::cout <<"Destructor called for name: "<<name<<std::endl;
     }

    //default consturctor for c4
    customer(){
        name = "Raju";
        balance = 48965;
        data = new int(0);
        std::cout <<"Default constructor called for name: "<<name<<" "<<"Balance: "<<balance<<std::endl;
    }
    //destructor run from bottom to top


    void display(){
        std::cout<<"Name: "<<name<<" "<<"Balance: "<<balance<< std::endl;
    }
};

//main function
int main(){
    customer c1("Rohit", 4564);
    customer c2("Raman", 4896);
    customer c3("Raghav", 45612);
    customer *c4 = new customer; //dynamically allocate object;
    //Now we have to create destructor manually for c4
    delete c4;
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}