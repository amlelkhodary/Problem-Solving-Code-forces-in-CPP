#include<iostream>
#include <string>
int main(){
    int n,k;
    std::cin>>n>>k;    
    for(int i=0; i<k; i++){
        std::string num_to_str = std::to_string(n);
        int len = num_to_str.length();
        if((num_to_str[len-1])-0x30 == 0)
            n=n/10;   
        else
            n-=1;  
    }
    std::cout<<n<<std::endl;
    return 0;
}