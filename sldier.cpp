#include<iostream>
int main(){
    int k=0,n=0,w=0,borrow=0,total_cost=0;
    std::cin>>k>>n>>w;
    for(int i=0; i<w; i++){
        total_cost+=(i+1)*k;
    }
    if(total_cost > n)
        borrow = total_cost-n;
    std::cout<<borrow;
    return 0;
}