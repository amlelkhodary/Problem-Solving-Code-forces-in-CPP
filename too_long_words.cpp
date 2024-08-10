#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    char array_of_words[n][101];
    for(int i=0; i<n; i++){
        cin>>array_of_words[i];
    }
    for(int i=0; i<n; i++){
        int len = strlen(array_of_words[i]);
        int val = len-2;
        if(len > 10){
            cout<<array_of_words[i][0];
            cout<<val;
            cout<<array_of_words[i][len-1]<<endl;
        }
        else
            cout<<array_of_words[i]<<endl;
    }
    return 0;
}