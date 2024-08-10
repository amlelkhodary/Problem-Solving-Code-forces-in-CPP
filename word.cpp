#include<iostream>
#include<string>

bool isLower(char ch){
    return (ch>='a' && ch<='z');
}

bool isUpper(char ch){
    return (ch>='A' && ch<='Z');
}

void toLower(std::string& str){
    for(char& ch:str){
        if(ch>='A' && ch<='Z')
            ch+=32;
    }
}

void toUpper(std::string& str){
    for(char& ch:str){
        if(ch>='a' && ch<='z')
            ch-=32;
    }
}

int main(){
    std::string s;
    std::cin>>s;
    int upper_counter = 0;
    int lower_counter = 0;
    for(int i=0; i<s.length(); i++){
        if(isLower(s[i]))
            lower_counter++;
        else if(isUpper(s[i]))
            upper_counter++;
    }
    if(lower_counter>upper_counter || lower_counter==upper_counter)
        toLower(s);
    else
        toUpper(s);
    std::cout<<s<<std::endl;
    return 0;
}