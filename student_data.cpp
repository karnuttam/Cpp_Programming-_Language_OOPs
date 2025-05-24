# include <iostream>
# include <string>

int main(){
    std::pmr::string name;
    int roll_no;
    int marks;
    //char grade;

    std::cout <<"Enter the name of the student: " << std::endl;
    std::cin >>name;

    std::cout <<"Enter the roll number: " << std::endl;
    std::cin >> roll_no;

    std::cout <<"Enter the marks: " <<std::endl;
    std::cin >>marks;

    if(marks >= 90){
        std::cout<<"Grade: 'A'"<< std::endl;
    }else if(marks >= 75){
        std::cout <<"Grade: 'B'"<<std::endl;
    }else if(marks >= 65){
        std::cout <<"Grade: 'C'"<<std::endl;
    }else if(marks >= 55){
        std::cout <<"Grade: 'D'"<<std::endl;
    }else{
        std::cout<<"Fail"<<std::endl;
    }
    return 0;
}