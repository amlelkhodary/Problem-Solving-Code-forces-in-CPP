#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0, i=0, n=0, a=0, b=0, min_price=0;
    vector<int> out;
    cin>>t;
    while(i<t){
        cin>>n>>a>>b;
        if(b>2*a)
            min_price = n*a;
        else{
            if(n%2 == 0)
                min_price = (n/2)*b;
            else
                min_price = (n/2)*b + a;
        }
        out.push_back(min_price);
        i++;
    }
    for(int val:out){
        cout<<val<<endl;
    }
    return 0;
}