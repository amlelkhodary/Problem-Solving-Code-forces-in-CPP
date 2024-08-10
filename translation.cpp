#include<iostream>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int true_counts = 0;
    int j = t.length()-1;
    for(int i=0; i<s.length(); i++){
        if(s[i] == t[j])
            true_counts++;
        j--;
    }
    if(true_counts==s.length())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}