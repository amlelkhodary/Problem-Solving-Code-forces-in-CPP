#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    int t =0;
    cin>>t;
    int i=0;
    string input;
    stringstream ss(input);
    vector<int> output;
    int sum=0;
    int number;
    while(i<t){
        cin>>input;
        stringstream ss(input);
        while(ss >> number){
            sum+=number;
        }
        output.push_back(sum);
        sum = 0;
        i++;
    }
    for(int val:output){
        cout<<val<<endl;
    }
    return 0;
}