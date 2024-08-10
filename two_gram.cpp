#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=0; cin>>n;
    string in; cin>>in;
    string substr; string result= in.substr(0,2); int counts=0 ;
    for(int j=0; j<n-1; j++){
        int count=0;
        substr = in.substr(j,2);
        // substr = string(1,in[i]) + string(1,in[i+1]);
        for(int i=0; i<n-1; i++){
            if(substr == in.substr(i,2)){
                count ++;
                if(j==0)
                    counts++;
            }
        }
        if(count > counts){
            counts = count;
            result = substr;
        }
    }
    cout<<result;
    return 0;
}