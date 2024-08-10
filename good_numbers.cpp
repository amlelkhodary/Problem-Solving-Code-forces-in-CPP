#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int t=0, i=0, a=0, b=0;
    cin>>t;
    vector<long long int> out;
    vector<vector<long long int>> output;
    while(i<t){
        cin>>a>>b;
        long long int x=0, y=0, z=0,j=1;
        while(j<10){
            z=a*b*j;
            for(long long int i=a; i<(z-a); i+=a){
                x = a;
                if((z-x)%a == 0 && (z-x)%b != 0){
                    y=z-x;
                    break;
                    break;
                }
            }
            j+=1;
        }
        
        out.push_back(x);out.push_back(y);out.push_back(z);
        output.push_back(out);
        out.clear();
        i++;
    }
    for(vector<long long int> val : output){
        cout<<"YES"<<endl;
        for(int i=0; i<val.size(); i++){
            cout<<val[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}