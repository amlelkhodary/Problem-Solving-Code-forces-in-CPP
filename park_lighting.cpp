#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int t=0, i=0, x=0, y=0, size=0;
    vector<long long int> out;
    cin>>t;
    while(i<t){
        cin>>x>>y; 
        size = x*y;
        out.push_back((size/2)+size%2);
        i++;
    }
    for(long long int val: out){
        cout<<val<<endl;
    }
    return 0;
}
