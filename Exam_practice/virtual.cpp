#include <iostream>
//using namespace std;

class Animal{
    public:
    virtual void eats(){
        std::cout<<"Herbivorous animal eats grasses"<<std::endl;
    }

};
class Dog: public Animal{
    public: 
    void eats() override{
        std::cout<<"Dog eats bone"<<std::endl;
    }
};

class Cat: public Animal{
    public:
    void eats() override{
        std::cout<<"Cat drinks milk"<<std::endl;
    }
};

class Shape{
    public: 
    virtual void area() = 0;
};

class Rectangle: public Shape{
    public:
    float length;
    float breadth;
    Rectangle(float length, float breadth){
        this -> length = length;
        this -> breadth = breadth;
    }
    void area() override{
        float result = (length*breadth);
        std::cout<<"Area of rectangle: "<<result<<std::endl;

    }
};

class Circle: public Shape{
    public: 
    float radius;
    Circle(float radius){
        this -> radius = radius;
    }
    void area(){
        float result = (3.14*radius * radius);
        std::cout<<"Area of Circle: "<<result<<std::endl;
    }


};

int main(){
    Animal a;
    a.eats();
    Animal *animal;
    Dog d;
    Cat c;
    animal =  &d;
    animal -> eats();
    animal = &c;
    animal -> eats();

    Shape *s;
    Rectangle r(2, 4);
    s = &r;
    s-> area();
    Circle circ(2);
    s = &circ;
    s->area();
    return 0;
}