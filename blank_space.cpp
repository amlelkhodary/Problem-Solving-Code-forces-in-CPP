#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    int i=0, element=0, n=0;
    vector<int> input;
    vector<int> output;
    int zero_count = 0, max_count = 0;
    while(i<t){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>element;
            if(element == 0){
                zero_count++;
            }
            else{
                max_count = (max_count>zero_count)?max_count:zero_count;
                zero_count = 0;
            }
            input.push_back(element);
        }
        max_count = (max_count>zero_count)?max_count:zero_count; //in case it doesn'y enter else condition
        output.push_back(max_count);
        input.clear(); zero_count=0; max_count=0;
        i++;
    }
    for(int val:output){
        cout<<val<<endl;
    }
    return 0;
}