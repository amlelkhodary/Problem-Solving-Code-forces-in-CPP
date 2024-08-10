#include<iostream>
#include<vector>
int main(){
    int t=0;
    std::cin>>t;
    std::vector<int> outVec;
     int i=0, element=0;
    while(i<t){
        std::cin>>element;
        if(element>=3){
            int last_digit = element / 3;
            if(element %3 != 0 && last_digit != 0)
                outVec.push_back(element);
        }
        // else
        //     outVec.push_back(element);
        // i++;
    }
    for(int value:outVec){
        std::cout<<value<<std::endl;
        double d=(d/3);
        std::cout<<(d)<<std::endl;
    }
    return 0;
}