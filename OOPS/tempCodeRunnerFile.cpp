It is declared using the static keyword inside the class.

Only one copy of the static member exists, regardless of how many objects are created.

It is initialized outside the class definition (except in C++17 and later where you can use inline initialization).

It is initialized only once, before any object of that class is created (if accessed early).
*/

# include <iostream>

class customer{
    public:
    std::string name;
    double account_number;
    int code;
    double balance;
    static int total_customers; //static data member declaration

    //create parametrized constructor to initialize
    customer(std::string name, double account_number, int code,  double balance){
        this->name = name;
        this -> account_number = account_number;
        this -> code = code;
        this -> balance = balance;
        total_customers++;

    }

    //function to display the data
    void display(){
        std::cout <<"Name: "<<name<<" "<<"A/C Number: "<<account_number<<" "<<"Code: "<<code<<" "<<"Balance: "<<balance<<std::endl;
    }
static void showCount(){
    std::cout<<"Total customer: "<<total_customers<<std::endl;
}
};
// Definition & Initialization of static member outside the class
int customer::total_customers = 0;