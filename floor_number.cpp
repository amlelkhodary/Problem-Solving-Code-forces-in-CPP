#include<iostream>
#include<vector>
int find_floor(int apart, int xx){
    if(apart >= 1 && apart <= 2)
        return 1;
    else if (apart >= 3 && apart <=(2+xx))    
        return 2;
    int a = 1;
    int b = 2;   
    for(int i=3; i<apart; i++){
        if(apart >= (3+a*xx) && apart <= (2+b*xx))
            return (b+1);
        a++;
        b++;
    }
    return -1;
}
int main(){
    int t=0;
    std::cin>>t;
    int i=0;
    int apart_no = 0;
    int x = 0;
    int floor_no = 0;
    std::vector<int> outVec;
    while(i<t){
        std::cin>>apart_no;
        std::cin>>x;
        floor_no = find_floor(apart_no,x);
        outVec.push_back(floor_no);
        i++;
    }
    for(int value : outVec){
        std::cout<<value<<std::endl;
    }
    return 0;
}