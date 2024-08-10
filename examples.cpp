#include <stdio.h> 
#include<iostream>

int main(){
    int i;
    std::cout<<"i = "<<i<<std::endl;
    std::cout<<printf("2")<<std::endl;
    if (printf("0"))
        i = 3;
    else
        i = 5;
    printf("%d", i);
    i = 0;
    return 0;
}
