#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0, i=0, elem=0, k=0, n=0, m=0, counter=0;
    cin>>t;
    vector<int> coins1;
    vector<int> coins2;
    vector<int> output;
    while(i<t){
        cin>>n>>m>>k;
        for(int j=0; j<n; j++){
            cin>>elem;
            if(elem<k)
                coins1.push_back(elem);
        }
        for(int j=0; j<m; j++){
            cin>>elem;
            if(elem<k)
                coins2.push_back(elem);
        }
        for(int j=0; j<coins1.size(); j++){
            for(int l=0; l<coins2.size(); l++){
                if((coins1[j]+coins2[l]) <= k)
                    counter++;
            }
        }
        output.push_back(counter);
        coins1.clear(); coins2.clear(); counter=0;
        i++;
    }
    for(int val:output){
        cout<<val<<endl;
    }
    return 0;
}