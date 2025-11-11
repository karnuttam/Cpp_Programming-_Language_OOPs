#include <iostream>
#include <cstring>
//using namespace std;

class StudentRecord{
    private: 
    char *name;
    int rollno;
    float *marks;
    int n;//number of subjects
    public:
    //----------------Parametrized constructor------
    StudentRecord(const char *name, int rollno, int n)
    {
        this -> n = n;
        this-> rollno = rollno;
        //Allocate memory for name
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name , name);
        //Allocate memory for marks
        this -> marks = new float[this-> n];

        std::cout<<"Enter "<<this -> n<<" marks for "<<this -> name<<":\n";
        for (int i = 0; i < this-> n; i++){
            std::cin >>this-> marks[i];
        }


    }

    //Update marks
    void updateMarks(int index, float newMarks){
        if(index >=0 &&index < this-> n){
            this-> marks[index] = newMarks;
        }else{
            std::cout<<"Invalid index"<<std::endl;
        }
    }

    //-------------Display function
    void display() const{
        std::cout<<"Student Name: "<<this -> name<<std::endl;
        std::cout<<"Roll NO.: "<<this->rollno<<std::endl;
        std::cout<<"Marks:";
        for(int i =0; i <this-> n; i++){
            std::cout<<this->marks[i]<<" ";
        }
        std::cout<<std::endl;

    }

    //----------Copy Constructor--------
    StudentRecord(const StudentRecord &other){
        this -> n = other.n;
        this -> rollno = other.rollno;
        this -> name = new char[strlen(other.name)+1];
        strcpy(this-> name, other.name);
        this-> marks = new float[this -> n];
        for(int i = 0; i <this->n; i++){
            this -> marks[i] = other.marks[i];
        }

        std::cout<<"Copy constructor called "<<this -> name<<std::endl;

    }
    //------Copy Assignment operator----
    StudentRecord &operator=(const StudentRecord &other){
        if(this != &other){
            delete[] this -> name;
            delete[] this -> marks;

            this -> n = other.n;
            this -> rollno = other.rollno;
            this -> name = new char[strlen(other.name)+1];
            strcpy(this -> name, other.name);
            this -> marks = new float[this-> n];
            for(int i = 0; i < this ->n;i++){
                this -> marks[i] = other.marks[i];
            }

        }
        std::cout<<"Copy assignment called for "<<this -> name<<std::endl;
        return *this;
    }

    //Destructor
    ~StudentRecord(){
        std::cout<<"Releasing memory for "<<(this-> name? this->name:"Unnamed")<<std::endl;
        delete[] this->name;
        delete[] this-> marks;

        //Demonstrating safe nulling (avoid dangling pointers)
        this -> name = nullptr;
        this -> marks = nullptr;

    }
   
};

int main(){
    std::cout<<"Enter data for student 1: "<<std::endl;
    StudentRecord s1("Rohit", 101, 3);
    s1.display();

    std::cout<<"Updating Marks"<<std::endl;
    s1.updateMarks(1, 99.5);
    s1.display();
    std::cout<<"Creating a copy of s1 (copy constructor): "<<std::endl;
    StudentRecord s2 = s1;
    s2.display();

    std::cout<<"Assignment s1 to a new object s3(copy assignment): "<<std::endl;
    StudentRecord s3("Temp", 999, 2);
    s3 = s1;
    s3.display();

    std::cout<<"End of main"<<std::endl;

    return 0;
}