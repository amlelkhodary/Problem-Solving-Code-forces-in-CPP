#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    string input1;
    string input2;
    vector<string> output1;
    vector<string> output2;
    int i=0, n=0, element=0;
    while(i<t){
        cin>>input1>>input2;
        int temp = input1[0];
        input1[0] = input2[0];
        input2[0] = temp;
        output1.push_back(input1);
        output2.push_back(input2);
        i++;
    }
    for(int i=0; i<output1.size(); i++){
        cout<<output1[i]<<" "<<output2[i]<<endl;
    }
    return 0;
}