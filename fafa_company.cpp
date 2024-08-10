#include<iostream>
using namespace std;
int main(){
    int n = 0;
    int leaders_no = 0;
    int employees = 0;
    cin>>n;
    int tests_no = n/2; 
    int i=1;
    while(i<=tests_no){
        employees = n - i;
        if((employees % i) == 0)
            leaders_no++;
        i++;
    }
    cout<<leaders_no<<endl;

    return 0;
}
