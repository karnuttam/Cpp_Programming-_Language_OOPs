#include <iostream>
#include <cstring>
//using namespace std;

class Consumer{
    public: 
    int units;
    std::string name;
    int id;
    int rs;
    
    void getData(std::string name, int id, int units){
        this -> name = name;
        this -> id = id;
        this -> units = units;

         if(units <= 100){
            int total_rs;
            total_rs = units*(0.50);
            std::cout<<"Total unit consumed: "<<units<<std::endl;
            std::cout<<"The total rupees: "<<total_rs<<std::endl;
        
    }else if(units > 100 && units <= 200){
        int total_rs;
        total_rs = units*(0.70);
        std::cout<<"Total units consumed: "<<units<<std::endl;
        std::cout<<"The total rupees: "<<total_rs<<std::endl;
    }else{
        int total_rs;
        total_rs = units*(0.90);
        std::cout<<"The total rupees: "<<total_rs<<std::endl;
        int surcharge;
        surcharge = total_rs*(0.15);
        std::cout<<"Surcharge: "<<surcharge<<std::endl;
        float total_rsUpdated = total_rs + surcharge;
        std::cout<<"Total units consumed: "<<units<<std::endl;
        std::cout<<"The total amount after surcharge: "<<total_rsUpdated<<std::endl;
    }
    }

    void display(){
        std::cout<<"Consumer Name: "<<name<<std::endl;
        std::cout<<"Consumer ID: "<<id<<std::endl;
    }
    /*
    void getUnitDetail(){
        std::cout<<"The total units consumed: "<<units<<std::endl;
    }
*/
};

int main(){
    std::string name;
    int id;
    int units;
    std::cout<<"Enter the Consumer Name: "<<std::endl;
    std::getline(std::cin, name);
    std::cout<<"Enter Consumer ID: "<<std::endl;
    std::cin>>id;
    std::cout<<"Enter total Units consumed: "<<std::endl;
    std::cin>>units;
     Consumer C1;
    C1.getData(name, id, units);
   // C1.getUnitDetail();
    C1.display();
    return 0;
}