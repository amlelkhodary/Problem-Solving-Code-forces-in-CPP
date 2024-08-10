#include<iostream>
int main(){
    int y = 0;
    int x = 0;
    std::cin>>x;
    if(x==1 || x==2 || x==3 || x==4 || x==5){
        y = x/x;
    }
    else{
        if(x%5 == 0)
            y = x/5;
        else{
            y = (x/5)+1;
        }
    }
    std::cout<<y;
    return 0;
}