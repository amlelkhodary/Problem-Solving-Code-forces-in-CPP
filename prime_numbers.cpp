#include <iostream>
bool is_prime(int n){
    if(n<=1)
        return false;
    else if(n<=3)
        return true;
    else{
        for(int i=2; i<n; i++){
            if(n % i == 0)
                return false;
        }
    }
    return true;
}

int main() {
    unsigned int x = 0;
    unsigned int y = 0;
    std::cin>>x>>y;
    x+=1;
    while(!is_prime(x)){
        x+=1;
    }
    if(y==x)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}