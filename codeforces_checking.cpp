#include<iostream>
#include<vector>
#include<string>
int main(){
    std::string word ="codeforces";
    std::vector<std::string> outVec;
    int t=0;
    std::cin>>t;
    int i=0;
    char ch;
    while(i<t){
        std::cin>>ch;
        if(word.find(ch) != std::string::npos) //npos indicates that char not found
            outVec.push_back("YES");
        else    
            outVec.push_back("NO");
        i++;
    }
    for(std::string str : outVec){
        std::cout<<str<<std::endl;
    }
    return 0;
}