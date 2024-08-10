#include<iostream>
#include<vector>
using namespace std;
long long gcd(long long int a,long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
int main(){
    int t=0, i=0, x=0, a=0, b=0;
    vector<int> out;
    vector<vector<int>> output;
    cin>>t;
    while(i<t){
        cin>>x;
        a=1, b=x-1;
        out.push_back(a);
        out.push_back(b);
        output.push_back(out);
        out.clear();
        i++;
    }
    for(vector<int> val :output){
        for(int i=0; i<val.size(); i++){
            cout<<val[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}