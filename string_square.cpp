#include<iostream>
#include<vector>
#include<string>
int main(){
    int t = 0;
    std::cin>>t;
    std::string input;
    std::vector<std::string> outVec;
    int count = 0;
    int i =0;
    while(i<t){
        std::cin>>input;
        int len = input.length();
        if(len % 2 == 1)
            outVec.push_back("NO");
        else{
            int mid = len/2;
            for(int i=0; i<mid; i++){
                if(input[i] == input[i+mid])
                    count++;
            }
            if(count == mid)
                outVec.push_back("YES");
            else
                outVec.push_back("NO");
        }
        count = 0;
        i++;
    }
    for(std::string element:outVec){
        std::cout<<element<<std::endl;
    }
    return 0;
}