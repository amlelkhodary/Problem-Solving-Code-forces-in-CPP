#include<iostream>
#include<vector>
using namespace std;
string find_bin(int num){
    string result;
    int div = 0;
    while(num != 0){
        if(num % 2 == 0)
            result = '0'+result;
        else
            result = '1'+result;
        num/=2;
    }
    return result;
}
int find_max_index(string str){
    int max_index = 0;
    int len = str.length();
    for(int i=0; i<len; i++){
        if(str[i] == '1')
            return (len-i-2);
    }
    return 0;
}
int main(){
    int t=0, i=0, n=0, max=0;
    cin>>t;
    vector<int> out;
    while(i<t){
        cin>>n;
        if(n==3)
            max = n;
        else
            max = 2;   
        out.push_back(max);
        i++;
    }
    for(int val: out){
        cout<<val<<endl;
    }
    return 0;
}