#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t=0;
    cin>>t;
    int i = 0;
    string input;
    int a_counter = 0;
    int b_counter = 0;
    vector<char> output;
    while(i<t){
        cin>>input;
        for(int i=0; i<input.length(); i++){
            if(input[i]=='A')
                a_counter++;
            else
                b_counter++;
        }
        if(a_counter>b_counter)
            output.push_back('A');
        else    
            output.push_back('B');
        a_counter = 0;
        b_counter = 0;
        i++;
    }
    for(char ch:output){
        cout<<ch<<endl;
    }
    return 0;
}