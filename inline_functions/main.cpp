#include<iostream>
#include<chrono>
#include"night.hpp"
int main(){
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    std::cout << goodnight1("tulip");
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double,std::milli> time_span = end-start;
    std::cout<<"Time of goodnight1() function = "<<time_span.count()<<std::endl;
    return 0;
}