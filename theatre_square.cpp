#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    unsigned long long n , m , a = 0;
    cin>>n>>m>>a;
    // unsigned long long value=ceil((double)m/a)*ceil((double)n/a);
    // cout<<value ;
    double count_n = (int)n/a;
    double count_m = (int)m/a;
    if((n % a) != 0){
        count_n++;
    }
    if((m % a) != 0){
        count_m++;
    }
    unsigned long long counts = count_n*count_m;
    cout<<counts;
    return 0;
}