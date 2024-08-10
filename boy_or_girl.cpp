#include<iostream>
#include<algorithm> //for sort() and unique()
int main(){
    std::string name;
    std::cin>>name;
    std::sort(name.begin(),name.end());
    auto repeated_moved_to_end = std::unique(name.begin(),name.end());
    name.erase(repeated_moved_to_end,name.end());
    if(name.length()%2 == 1)
        std::cout<<"IGNORE HIM!\n";
    else
        std::cout<<"CHAT WITH HER!\n";
    return 0;
}