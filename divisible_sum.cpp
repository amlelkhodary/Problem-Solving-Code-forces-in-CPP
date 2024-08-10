#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t=0, i=0;
    int n=0, k=0;
    cin>>t;
    vector<int> out;
    while(i<t){
        cin>>n>>k;
        if(n==1)
            out.push_back(k);
        else if(k<n)
            out.push_back(k%n -1);
        else if(k>n)
            out.push_back(k%n +2);      
        else if(k == n)
            out.push_back(1);   
        i++;
    }
    for(int val : out){
        cout<<val<<endl;
    }
    return 0;
}