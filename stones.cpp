#include <iostream>
int main(){
    int removes = 0;
    int n=0;
    std::cin>>n;
    std::string colors;
    std::cin>>colors;
    for(size_t i=0; i<n-1; i++){
        if(colors.at(i)==colors.at(i+1))
            removes++;
    }
    std::cout<<removes<<std::endl;
    return 0;
}