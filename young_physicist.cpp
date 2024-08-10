#include<iostream>
#include<vector>
int main(){
    int n=0;
    std::cin>>n;
    std::vector<int> inVec;
    int x_sum = 0;
    int y_sum = 0;
    int z_sum = 0;
    int element = 0;
    int i=0;
    while(i<n){
        for(int i=0; i<3; i++){
            std::cin>>element;
            inVec.push_back(element);
        }
        x_sum+=inVec[0];
        y_sum+=inVec[1];
        z_sum+=inVec[2];
        inVec.clear();    
        i++;
    }
    if(x_sum==0 && y_sum==0 && z_sum==0)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;
    return 0;
}