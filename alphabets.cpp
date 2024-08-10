#include<iostream>
#include<bits/stdc++.h>
int main(){
    std::string str1;
    std::string str2;
    std::cin>>str1;
    std::cin>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if(str1<str2)
        std::cout<<"-1";
    else if(str2<str1)
        std::cout<<"1";
    else
        std::cout<<"0";
    return 0;
}