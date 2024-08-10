#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b) {
    return a > b;
}
int main(){
    int t=0, len=0, i=0, elem=0, counter=1, triple=0;
    vector<int> in_vec;
    vector<int> out_vec;
    cin>>t;
    while(i<t){
        cin>>len;
        int j=0;
        while(j<len){
            cin>>elem;
            in_vec.push_back(elem);
            j++;
        }
        sort(in_vec.begin(),in_vec.end(),compare);
        for(int k=0; k<len-1; k++){
            if(in_vec[k] == in_vec[k+1]){
                counter++;
                if(counter == 3){
                    triple = in_vec[k];
                    break;
                }
            }
            else
               counter = 1; 
        }
        if(counter < 3)
            triple = -1;

        out_vec.push_back(triple);
        counter = 1;
        in_vec.clear();
        i++;
    }
    for(int val : out_vec){
        cout<<val<<endl;
    }
    return 0;
}