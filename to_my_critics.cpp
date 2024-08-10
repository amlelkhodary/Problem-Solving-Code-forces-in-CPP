#include<iostream>
#include<vector>
#include<string>
int main(){
    int t=0;
    std::cin>>t;
    std::vector<int> inVec;
    std::vector<std::string> outVec;
    int i=0;
    int element=0;
    while(i<t){
        for(int i=0; i<3; i++){
            std::cin>>element;
            inVec.push_back(element);
        }
        if((inVec[0]+inVec[1])>=10 || (inVec[1]+inVec[2])>=10 || (inVec[0]+inVec[2])>=10)
            outVec.push_back("YES");
        else
            outVec.push_back("NO");
        inVec.clear();
        i++;
    }
    for(std::string value : outVec){
        std::cout<<value<<std::endl;
    }
    return 0;
}