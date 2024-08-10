#include <iostream>
using namespace std;
int main(){
    int n,k =0;
    cin>>n>>k;
    int participates[n];
    int counts = 0;
    for(int i=0; i<n; i++){
        cin>>participates[i];
    }
    
    for(int i=0; i<n; i++){
        if(participates[i]>=participates[k-1] && participates[i] > 0)
            counts++;
        // if (participates[i] == 0 && participates[k] == 0)
        //     counts = 0;
    }
    cout<<counts;
    return 0;
}