#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    vector<int> input;
    vector<string> output;
    int equals = 0;
    int i=0, element=0;
    int n=0; //No of ests
    while(i<t){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>element;
            input.push_back(element);
        }
        if(n>1){
            sort(input.begin(),input.end());
            for(int i=0; i<n-1; i++){
                if(input[i] == input[i+1])
                    equals++;
            }
            if(equals>0)
                output.push_back("NO");
            else    
            output.push_back("YES");
        }
        else
            output.push_back("YES");  
        input.clear();
        equals = 0;
        i++;
    }
    for(string val:output){
        cout<<val<<endl;
    }
    return 0;
}