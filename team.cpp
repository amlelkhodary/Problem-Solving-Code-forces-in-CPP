#include<iostream>
using namespace std;
int main(){
    int n = 0;
    int problem_count = 0;
    cin>>n;
    int problems[n][4];
    for(int i=0; i<n; i++){
        cin>>problems[i][0]>>problems[i][1]>>problems[i][2];
    }
    for(int i=0; i<n; i++){
        if((problems[i][0] ==1 && problems[i][1] == 1) || (problems[i][1] ==1 && problems[i][2] == 1) || (problems[i][0] ==1 && problems[i][2] == 1)){
            problem_count++;
        }
    }
    cout<<problem_count<<endl;
    return 0;
}