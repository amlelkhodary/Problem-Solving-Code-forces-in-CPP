#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int i=0, n=0;
    string input;
    vector<int> output;
    while(i<t){
        cin>>n;
        int initial = n;
        int start_ptr = 0, end_ptr = n-1;
        cin>>input;
        for(int start_ptr=0; start_ptr<n/2; start_ptr++){
            if((input[start_ptr]!=input[end_ptr])){
                initial-=2; 
                end_ptr--;
            }  
            else
                break ;
        }
        output.push_back(initial); 
        i++;
    }
    for(int val:output){
        std::cout<<val<<endl;
    }
    return 0;
}