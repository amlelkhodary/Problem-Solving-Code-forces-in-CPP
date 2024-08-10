#include<iostream>
#include<vector>
#include<string>
int main(){
    std::string love = "codeforces";
    std::string word;
    int t = 0;
    std::cin>>t;
    int indices_count = 0;
    std::vector<int> outVec;
    int i=0;
    while(i<t){
        std::cin>>word;
        for(int i=0; i<love.length();i++){
            if(word[i]!=love[i])
                indices_count++;
        }
        outVec.push_back(indices_count);
        indices_count=0;
        i++;
    }
    for(int value: outVec){
        std::cout<<value<<std::endl;
    }

    return 0;
}