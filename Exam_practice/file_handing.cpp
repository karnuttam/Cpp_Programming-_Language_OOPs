#include <iostream>
#include <fstream>
//using namespace std;

int main(){
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");

    if(!fin){
        std::cout<<"Error, input file is not opening"<<std::endl;
        return 1;

    }else{
        char ch;
        char prev = '\0';

        while(fin.get(ch)){
            if(ch == ' '&&prev == ' '){
                continue;
            }else{
                fout.put(ch);
            }
            prev = ch;
        }
        
    }
    fin.close();
        fout.close();
        std::cout<<"Successfully removed the extra spaces"<<std::endl;


    return 0;
}