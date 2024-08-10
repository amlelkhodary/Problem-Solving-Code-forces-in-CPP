#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t=0; cin>>t; int i=0;
    vector<int> out_vec; int counter=0; string input; int len=0;
    bool first=true; int first_index=0; int diff=0;
    while(i<t){
        cin>>len; cin>>input;
        first=true;
        for(int j=0; j<len; j++){
            if(first && input[j] == 'B'){
                first_index = j;
                first = false;
            }
            if(input[j] == 'B'){
                diff = j - first_index;
            }
        }
        out_vec.push_back(++diff);
        i++;
    }
    for(int val : out_vec){
        cout<<val<<endl;
    }
    return 0;
}