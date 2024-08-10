#include<iostream>
#include<vector>
int main(){
    int t=0;
    std::cin>>t;
    std::vector<int> inVec;
    std::vector<int> outVec;
    int i=0;
    int element =0;
    while(i<t){
        for(int i=0; i<3; i++){
            std::cin>>element;
            inVec.push_back(element);
        }
        if(inVec[0]!= inVec[1] && inVec[0]!=inVec[2])
            outVec.push_back(inVec[0]);
        else if(inVec[1]!= inVec[0] && inVec[1]!=inVec[2])
            outVec.push_back(inVec[1]);
        else if(inVec[2]!= inVec[0] && inVec[2]!=inVec[1])
            outVec.push_back(inVec[2]);
        inVec.clear();
        i++;
    }
    for(int element : outVec){
        std::cout<<element<<std::endl;
    }
    return 0;
}