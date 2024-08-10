#include<iostream>
#include<vector>
using namespace std;
int find_min(int one, int two){
    if(one<two)
        return one;
    else
        return two;
}
int main(){
    long long int t=0, i=0, x=0, y=0, a=0, b=0;
    vector<long long int> out;
    cin>>t;
    while(i<t){
        cin>>x>>y;
        cin>>a>>b;
        long long int pay=0, a_pay=0, b_pay=0, min=0;
        if(a==0 && b==0)
            pay=0;
        else{
            a_pay = a*abs(x-y);
            min = find_min(x,y);
            if(min*b < min*2*a)
                b_pay = min*b ;
            else
                b_pay = min*2*a;
            pay = a_pay + b_pay ;
            pay = a_pay + b_pay ;
        }
        out.push_back(pay);
        i++;
    }
    for(long long int val: out){
        cout<<val<<endl;
    }
    return 0;
}
