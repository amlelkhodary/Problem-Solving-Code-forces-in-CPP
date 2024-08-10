#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
int find_min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
int main(){
    int tv_set = 0;
    int bob_set = 0;
    std::cin>>tv_set;
    std::cin>>bob_set;
    std::vector<int> inVec;
    int min_here = 0;
    int min_all = 0;
    int elem = 0;
    for(int i=0; i<tv_set; i++){
        std::cin>>elem;
        inVec.push_back(elem);
    }
    std::sort(inVec.begin(),inVec.end());
    min_here = inVec[0];
    min_all = inVec[0];
    for(int i=1; i<bob_set; i++){
        min_here = find_min(min_here,inVec[i]+min_here);
        min_all = find_min(min_here,min_all);
    }
    if(min_all>0)   
        min_all = 0;
    std::cout<<std::abs(min_all)<<std::endl;
    return 0;
}