#include<iostream>
#include<vector>
#include<string>
using namespace std;
int find_index(string str){
    for(int k=0; k<8; k++){
        if (str[k]!='.'){
            return k;
            break;
        }
    }
    return 0;
}
int main(){
    int t = 0;
    cin>>t;
    int i = 0;
    string input;
    string output;
    vector<string> words;
    int index = 0;
    while(i<t){    
        for(int j=0; j<8; j++){
            cin>>input;
            index = find_index(input);
            if(input[index]!='.')
                output+=input[index];
        }
        words.push_back(output);
        output.clear();
        i++;
    }
    for(string val:words){
        cout<<val<<endl;
    }
    return 0;
}