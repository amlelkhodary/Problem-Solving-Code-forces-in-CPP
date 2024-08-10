#include<iostream>
#include<vector>
#include<string>
int main(){
    unsigned long long t=0;
    unsigned long long number=0;
    std::cin>>t;
    std::vector<std::string> outVec;
    int i=0;
    while(i<t){
        std::cin>>number;
        while(number%2 == 0){
            number/=2;
        }
        if(number > 1)
            outVec.push_back("YES");
        else
            outVec.push_back("NO");
        i++;
    }
    for(std::string str:outVec){
        std::cout<<str<<std::endl;
    }
    return 0;
}