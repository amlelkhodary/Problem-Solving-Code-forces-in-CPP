#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm> //for std::copy

std::vector<std::string> conversion(const std::string str, char delimiter){
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string item;
    while(std::getline(ss,item,delimiter)){
        result.push_back(item);
    }
    return result;
}

int main(){
    ///////////This to convert from string to array of strings
    char deli = ' ';
    std::string str = "Amel Elkhodary";
    std::vector<std::string> vec =conversion(str,deli);
    for(const std::string& element : vec){
        std::cout<<element<<std::endl;
    }

    ///////////This to convert from string to array of characters
    int len = str.length();
    char charArray[len+1]; //+1 for nulll terminator
    std::copy(str.begin(),str.end(),charArray);
    charArray[len]='\0'; //Null Terminator
    std::cout<<"This is array of characters\n";
    for(char ch : charArray){
        std::cout<<ch<<std::endl;
    }
    std::cout<<charArray<<std::endl;

    ///////////This to convert from string to vector of characters
    std::vector<char> charVector(str.begin(),str.end());
    std::cout<<"This is vector of characters\n";
    for(char ch : charVector){
        std::cout<<ch<<std::endl;
    }
    std::cout<<"str.size() = "<<str.size()<<std::endl;
    std::cout<<"str.length() = "<<str.length()<<std::endl;

    //////////Using of try- catch exception
    std::string str2 = "0123456789";
    // for(size_t i=0; i<str2.size();i++){
    //     std::cout<<"element at "<<i<<" is "<<str2.at(i)<<std::endl;
    // }
    // std::cout<<"element at 10 iss "<<str2.at(10)<<std::endl;
    try{
        for(size_t i=0; i<str2.size();i++){
            std::cout<<"element at "<<i<<" is "<<str2.at(i)<<std::endl;
        }
        std::cout<<"element at 10 iss "<<str2.at(10)<<std::endl;
    }
    catch(const std::out_of_range& e) {
        std::cerr<<"Exception: "<<e.what()<<std::endl;
    }
    return 0;
}