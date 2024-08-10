#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n=0;
    cin>>n;
    vector<int> inputs;
    int i=0; int elem=0; int one=0;
    while(i<n){
        cin>>elem;
        inputs.push_back(elem);
        i++;
    }
    for(int element:inputs){
        if(element==1)
            one++;
    }
    if(one>=1)
        cout<<"HARD\n";
    else    
        cout<<"EASY\n";
    return 0;
}