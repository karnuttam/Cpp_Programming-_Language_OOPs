#include <iostream>
#include <fstream>
// using namespace std;

int main()
{
    std::ofstream outfile("document.txt");
    if (outfile.is_open())
    {
        outfile << "A young boy dreamed of becoming a great painter but failed his first art exam." << std::endl;
        outfile << "Instead of giving up, he practiced every day, learning from each mistake." << std::endl;
        outfile << "Years later, he held his first exhibition, impressing everyone with his talent." << std::endl;
        outfile << "People asked him how he succeeded, and he said, 'I never gave up.'" << std::endl;
        outfile << "His persistence turned failure into success, proving dreams come true with effort." << std::endl;
        outfile.close();
    }else{
        std::cout<<"We are facing some problems while opening the file"<<std::endl;
    }
    std::ifstream infile("document.txt");
    if(!infile.is_open()){
        return 1;
    }
    std::string line;
    while(getline(infile, line)){
        std::cout<<line<<std::endl;
    }
    //==========Demonstrating seekg()========function
    infile.clear(); //Clear all the EOF Flags
    infile.seekg(10, std::ios::beg);
    char ch;
    infile.get(ch);
    std::cout<<"The characters at 10th position: "<<ch<<std::endl;
    std::cout<<"The current position: "<<infile.tellg()<<std::endl;
    //Move 5 bytes forward from the current position
    infile.seekg(5, std::ios::cur);
    infile.get(ch);
    std::cout<<"5 bytees forward from the current position: "<<ch<<std::endl;
    std::cout<<"The current position: "<<infile.tellg()<<std::endl;

    //Move 10 bytes from the end
    infile.seekg(-10, std::ios::end);
    infile.get(ch);
    std::cout<<"10 bytes from the end: "<<ch<<std::endl;
    std::cout<<"The current position: "<<infile.tellg()<<std::endl;
      infile.close();


    
   
    return 0;
}