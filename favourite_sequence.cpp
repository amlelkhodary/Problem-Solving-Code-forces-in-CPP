#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0, i=0, elem=0,len=0;
    cin>>t;
    vector<int> input;
    vector<int> output;
    vector<vector<int>> vectors;
    while(i<t){
        cin>>len;
        int start_index = 0;
        int end_index = len-1;
        for(int j=0; j<len; j++){
            cin>>elem;
            input.push_back(elem);
        }
        for(int j=0; j<len/2; j++){
            output.push_back(input[start_index]);
            output.push_back(input[end_index]);
            start_index++;
            end_index--;
        }
        if(len%2 == 1)
            output.push_back(input[len/2]);
        vectors.push_back(output);
        input.clear(); output.clear();
        i++;
    }
    for(vector<int> val : vectors){
        for(int j=0; j<val.size(); j++){
            cout<<val[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}