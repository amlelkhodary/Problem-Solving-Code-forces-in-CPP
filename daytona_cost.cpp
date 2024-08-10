#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0, i=0, n=0, k=0, elem=0; 
    cin>>t;
    vector<int> input;
    vector<string> output;
    while(i<t){
        cin>>n>>k;
        for(int j=0; j<n; j++){
            cin>>elem; input.push_back(elem);
        }
        for(int j=0; j<n; j++){
            if(input[j] == k){
                output.push_back("YES");
                break;
            }
        }
        if(output.size() < (i+1))
            output.push_back("NO");
        input.clear();
        i++;
    }
    for(string val : output){
        cout<<val<<endl;
    }
    return 0;
}