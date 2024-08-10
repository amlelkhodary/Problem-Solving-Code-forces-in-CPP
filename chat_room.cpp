#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string input;
    cin>>input;
    string hello="hello";
    int j=0;
    for(int i=0; i<input.length();i++){
        if(input[i] == hello[j])
            j+=1;
    }
    if(j>=5)
        cout<<"YES\n";
    else
        cout<<"NO";
    return 0;
}