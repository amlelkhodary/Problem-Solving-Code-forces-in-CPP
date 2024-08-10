#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0, x=0, y=0, i=0;
    vector<int> output;
    vector<vector<int>> out;
    cin>>t;
    while(i<t){
        cin>>x>>y;
        if(x<y){
            output.push_back(x);
            output.push_back(y);
        }    
        else{
            output.push_back(y);
            output.push_back(x);
        }
        out.push_back(output);
        output.clear();
        i++;
    }
    for(vector<int> val:out){
        for(int j=0; j<val.size(); j++){
            cout<<val[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}