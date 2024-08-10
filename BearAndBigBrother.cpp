#include <iostream>
int main(){
    int yearsCount = 0;
    int a = 0; //Limak weight
    int b = 0; //Bob weight
    std::cin>>a>>b;
    while(a <= b){
        a*=3;
        b*=2;
        yearsCount++;
    }
    std::cout<<yearsCount<<std::endl;
    return 0;
}