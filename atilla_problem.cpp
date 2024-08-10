#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    string input;
    vector<int> output;
    int i=0, n=0;
    char start = 'a';
    while(i<t){
        cin>>n;
        cin>>input;
        sort(input.begin(),input.end());
        output.push_back(input[n-1]-static_cast<int>(start)+1);
        i++;
    }
    for(int val:output){
        cout<<val<<endl;
    }
    return 0;
}