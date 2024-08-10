#include<iostream>
#include<algorithm>
using namespace std;
bool is_distinct(string str){
    sort(str.begin(),str.end());
    int count = 1;
    int len = str.length();
    for(int i=0; i<(len-1); i++){
        if(str[i]!=str[i+1])
            count++;
    }
    if(count == len)
        return true;
    return false;
}
int main(){
    int in = 0;
    cin>>in;
    in++;
    string inStr = to_string(in);
    while(!is_distinct(inStr)){
        in++;
        inStr = to_string(in);
    }
    cout<<in<<endl;
    return 0;
}