#include<iostream>
using namespace std;
int find_max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
    int stops = 0;
    cin>>stops;
    int i=0;
    int out = 0;
    int in = 0;
    int capacity = 0;
    int inside_now = 0;
    while(i<stops){
        cin>>out>>in;
        inside_now-=out;
        inside_now+=in;
        capacity=find_max(inside_now,capacity);
        i++;
    }
    cout<<capacity<<"\n";
    return 0;
}