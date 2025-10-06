#include <iostream>
//using namespace std;
class Area{
    public:
    void area(float radius){
        std::cout<<"Area of the circle: "<<std::endl;
        float result = (3.14*radius*radius);
        std::cout<<"The area is: "<<result<<std::endl;
    }

    void area(float length, float breadth){
        std::cout<<"This is the area of rectangle"<<std::endl;
        float result = (length*breadth);
        std::cout<<"The area is: "<<result<<std::endl;
        
    }

    void area(int side){
        std::cout<<"This is the area of square: "<<std::endl;
        int result = (side*side);
        std::cout<<"The area is: "<<result<<std::endl;
    }
    void area (float breadth, float height, bool isTriangle){
    if(isTriangle){
        float result = (0.5*breadth*height);
        std::cout<<"The area is :"<<result<<std::endl;
    }else{
        return ;
    }
}

};

int main(){
    float length;
    float breadth;
    float height;
    int side;
    float radius;
    std::cout<<"Enter length: "<<std::endl;
    std::cin>>length;
    std::cout<<"Enter breadth: "<<std::endl;
    std::cin>>breadth;
    std::cout<<"Enter height: "<<std::endl;
    std::cin>>height;
    std::cout<<"Enter side: "<<std::endl;
    std::cin>>side;
    std::cout<<"Enter radius: "<<std::endl;
    std::cin>>radius;
    
    Area s;
    s.area(length, breadth);
    s.area(side);
    s.area(radius);
    s.area(breadth, height, false);

    return 0;
    
    
}