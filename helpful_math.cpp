#include<iostream>
#include<bits/stdc++.h>
int main(){
    std::string operation;
    std::cin>>operation;
    std::vector<char> vec;
    for(char ch : operation){
        if(ch=='1' || ch=='2' ||ch=='3')
            vec.push_back(ch);
    }
    sort(vec.begin(), vec.end());
    for(size_t i=0; i<vec.size();i++){
        if(i < vec.size() -1)
            std::cout<<vec.at(i)<<'+';
        else
            std::cout<<vec.at(i);
    }
    return 0;
}