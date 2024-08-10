#include<iostream>
#include<vector>
int main(){
    int t=0;
    std::cin>>t;
    std::vector<std::string> outVec;
    int a=0 , b=0 , c=0 ;
    int i = 0;
    while(i<t){
        std::cin>>a>>b>>c;
        if(b>a && b<c)
            outVec.push_back("STAIR");
        else if(b>a && b>c)
            outVec.push_back("PEAK");
        else
            outVec.push_back("NONE");
        i++;
    }
    for(std::string value:outVec){
        std::cout<<value<<std::endl;
    }
    
    return 0;
}