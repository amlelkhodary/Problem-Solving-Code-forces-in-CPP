#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    vector<int> input;
    vector<string> output;
    int i=0, n=0, element=0, sum=0;
    while(i<t){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>element;
            sum+=element;
            input.push_back(element);
        }
        if(sum%2 == 0)
            output.push_back("YES");
        else  
            output.push_back("NO");
        
        sum=0;input.clear();
        i++;
    }
    for(string val : output){
        cout<<val<<endl;
    }
    return 0;
}