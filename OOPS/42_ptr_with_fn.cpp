#include <iostream>
//using namespace std;
void update(int *x){
    *x = *x + 10;

}
int main(){
    int num = 5;
    update(&num);
    std::cout<<num<<std::endl;

}