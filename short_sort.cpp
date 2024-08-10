#include<iostream>
#include<vector>
int main(){
    std::vector<char> inVec;
    std::vector<std::string> outVec;
    int wrong_count = 0;
    int t = 0;
    std::cin>>t;
    int i=0; 
    char ch=0;
    while(i<t){
        for(int i=0; i<3; i++){
            std::cin>>ch;
            inVec.push_back(ch);
        }
        if(inVec[0]!='a')
            wrong_count++;
        if(inVec[1]!='b')
            wrong_count++;
        if(inVec[2]!='c')
            wrong_count++;
        if(wrong_count<3)
            outVec.push_back("YES");
        else
            outVec.push_back("NO");
        wrong_count = 0;
        inVec.clear();
        i++;
    }
    for(std::string value:outVec){
        std::cout<<value<<std::endl;
    }
    return 0;
}