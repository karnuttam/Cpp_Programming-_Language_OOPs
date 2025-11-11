#include <iostream>
#include <fstream>

int main(){

    std::ofstream outfile("file.txt");
    if(outfile.is_open()){
        outfile<<"This is the creation of the file"<<std::endl;
        outfile<<"Today is OOPs lab exam."<<std::endl;
        outfile<<"I am preparing for that exam."<<std::endl;
        outfile<<"Our lab exam will start on sharp 3:10 PM"<<std::endl;
        outfile.close();
    }else{
        std::cout<<"Error to open the file"<<std::endl;

    }
    std::ifstream infile("file.txt");
    std::string line;
    int count = 0;
    if(infile.is_open()){
    while(getline(infile, line)){
        std::cout<<line<<std::endl;
        count++;


    }
    std::cout<<"Total Line: "<<count<<std::endl;
    infile.close();
}else{
    std::cout<<"Error happening while reading"<<std::endl;
}

    return 0;
}