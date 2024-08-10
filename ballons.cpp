#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
int main(){
    int t = 0;
    std::cin>>t;
    int i = 0;
    std::string input;
    std::vector<int> outVec;
    int counter = 1;
    int ballons = 0;
    int len = 0;
    while(i<t){
        std::cin>>len;
        std::cin>>input;
        std::sort(input.begin(),input.end());
        for(int i=0; i < len; i++){
            if(input[i] == input[i+1])
                counter++;
            else{
                ballons +=(counter+1);
                counter = 1;
            }
        }
        outVec.push_back(ballons);
        ballons = 0;
        i++;
    }
    for(int value : outVec){
        std::cout<<value<<std::endl;
    }
    return 0;
}