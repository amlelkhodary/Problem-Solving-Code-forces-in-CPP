#include<iostream>
#include<vector>
using namespace std;
bool is_there_even(vector<int> vec){
    for(int j=0; j<vec.size(); j++){
        if(vec[j]%2 == 0)
            return true;
    }
    return false;
}
bool is_there_odd(vector<int> vec){
    for(int j=0; j<vec.size(); j++){
        if(vec[j]%2 != 0)
            return true;
    }
    return false;
}
int main(){
    int t=0, n=0, i=0, elem=0;
    cin>>t;
    vector<int> input;
    vector<string> output;
    while(i<t){
        int sum=0;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>elem;
            input.push_back(elem);
            sum+=elem;
        }
        if(sum%2 == 0){
            if(is_there_even(input)&&is_there_odd(input))
                output.push_back("YES");
            else
                output.push_back("NO");
        }    
        else
            output.push_back("YES");
        input.clear();
        i++;
    }
    for(string val: output){
        cout<<val<<endl;
    }
    return 0;
}