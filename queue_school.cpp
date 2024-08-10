#include<iostream>
using namespace std;
#include<vector>
int main(){
    int number = 0;
    int times = 0;
    string children;
    string result;
    cin>>number>>times;
    cin>>children;
    int time=0;
    vector<char> outVec;
    while(time<times){ 
        result.clear();
        for(int i=0; i<number; i++){
            if(children[i]=='B'&& children[i+1]=='G'){
                result+=(children[i+1]);
                result+=(children[i]);
                i++;
            }
            else{
                result+=(children[i]);
            }
        }
        children = result;
        time++;
    }
    cout<<result<<endl;
    return 0;
}