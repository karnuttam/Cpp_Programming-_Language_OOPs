#include <iostream>
#include <fstream>

//using namespace std;
int main(){
std::ofstream outfile("textfile.txt");
std::cout<<"Successfully created the file"<<std::endl;
if(outfile.is_open()){
    outfile<<"This is the creation of textfile."<<std::endl;
    outfile<<"Performs some operations on textfile."<<std::endl;
    outfile.close();

}else{
    std::cout<<"We are facing problem in creating and opening the file"<<std::endl;
}
std::ifstream infile("textfile.txt");
std::string line;
if(infile.is_open()){
    while(getline(infile, line)){
        std::cout<<line<<std::endl;
    }
    infile.close();
}else{
    std::cout<<"Not able to read the file"<<std::endl;

}
outfile.open("textfile.txt", std::ios::app);
if(!outfile){
    return 1;
}else{
 outfile<<"I am going to perform some operations"<<std::endl;
}
outfile.close();
return 0;
}