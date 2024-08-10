#include<iostream>
#include<cctype>
int main(){
    std::string word;
    std::cin>>word;
    char first = toupper(word[0]);
    word[0]=first;
    std::cout<<word;
}