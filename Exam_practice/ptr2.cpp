#include <iostream>
//using namespace std;

int main(){
    int array[] = {56, 23, 96, 96, 45, 69};
int *start = array;
int *end = array + 6 -1;

while(start < end){
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;

}
start = array;
for (int i = 0; i < 6; i++){
    std::cout<<start[i]<<std::endl;
    
}
return 0;
}