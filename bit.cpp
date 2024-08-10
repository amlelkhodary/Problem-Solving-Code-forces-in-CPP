#include <iostream>
using namespace std;
int main(){
    int n = 0;
    int x= 0;
    cin>>n;
    char operations[n][4];
    for(int i=0; i<n; i++){
        cin>>operations[i];
    }
    for(int i=0; i<n; i++){
        if(operations[i][0] == '+')
            x++;
        else if(operations[i][0] == '-')
            x--;
        else {
            if(operations[i][1] == '+')
                x++;
            else if(operations[i][1] == '-')
                x--;
        }
    }
    cout<<x;
    return 0;
}