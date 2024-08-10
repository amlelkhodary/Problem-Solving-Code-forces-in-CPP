#include<iostream>
#include<vector>
using namespace std;
int find_min(int len, vector<int> vec){
    int min = vec[0];
    for(int i=1; i<len; i++){
        if(vec[i] < min)
            min = vec[i];
    }
    return min;
}
int main(){
    int t=0;
    cin>>t;
    int i = 0;
    vector<int> input;
    vector<int> output;
    int n=0, element=0;
    int min_val = 0;
    int product = 1;
    int first = 1;
    while(i<t){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>element;
            input.push_back(element);
        }
        min_val = find_min(n,input);
        for(int i=0; i<n; i++){
            if(input[i] == min_val)
                input[i]++; 
            product*=input[i];
        }
        output.push_back(product);
        product = 1;
        input.clear();
        i++;
    }
    cout<<"output is\n";
    for(int val:output){
        cout<<val<<endl;
    }
    return 0;
}