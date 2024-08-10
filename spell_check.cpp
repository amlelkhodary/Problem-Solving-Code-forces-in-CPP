#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

bool isValid(std::string word){
    std::string target = "Timur";
    std::sort(target.begin(), target.end());
    std::sort(word.begin(), word.end());
    return word == target;
}

int main(){
    int t = 0;
    std::cin>>t;
    int len = 0;
    std::string input;
    std::string word = "Timur";
    std::vector<std::string> outVec;
    int i = 0;
    while(i<t){
        std::cin>>len;
        std::cin>>input;
        if(len!=5)
            outVec.push_back("NO");
        else{
            if (isValid(input))
                outVec.push_back("YES");
            else
                outVec.push_back("NO");
        }
        i++;
    }
    for(std::string str:outVec){
        std::cout<<str<<std::endl;
    }
    return 0;
}