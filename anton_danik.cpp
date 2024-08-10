#include<iostream>
using namespace std;
int main(){
    int games = 0;
    string names;
    cin>>games;
    cin>>names;
    int a_count = 0;
    int d_count = 0;
    for(int i=0; i<games; i++){
        if(names[i] == 'A')
            a_count++;
        else
           d_count++; 
    }
    if(a_count>d_count)
        cout<<"Anton\n";
    else if (d_count>a_count)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    return 0;
}