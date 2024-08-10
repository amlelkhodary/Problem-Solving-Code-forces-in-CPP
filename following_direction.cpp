#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    string input;
    vector<string> output;
    int i=0, n=0;
    int u_d =0, r_l=0;
    while(i<t){
        cin>>n;
        cin>>input;
        for(int i=0; i<input.length(); i++){
            if(input[i] == 'U')
                u_d++;
            else if(input[i] == 'D')
                u_d--;
            else if(input[i] == 'R')
                r_l++;
            else
                r_l--;
            if(u_d == 1 && r_l == 1){
                output.push_back("YES");
                break;
            }               
        }
        if(output.size() != (i+1))
            output.push_back("NO");
        input.clear(); u_d=0; r_l=0;
        i++;
    }
    for(string val:output){
        cout<<val<<endl;
    }
    return 0;
}