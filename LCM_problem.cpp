#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> calculate_prime_factors(int num){
    vector<int> factors;
    while(num %2 == 0){
        factors.push_back(2);
        num/=2;
    }
    for(int i=3; i<sqrt(num); i+=2){
        while(num % i == 0){
            factors.push_back(i);
            num/=i;
        }
    }
    if(num > 2)
        factors.push_back(num);
    return factors;
}

int main(){
    int n1=0, n2=0;
    cout<<"Enter a number to calculate its prime numbers: ";
    cin>>n1;
    vector<int> prime = calculate_prime_factors(n1);
    for(int i=0; i<prime.size(); i++){
        cout<<prime[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter a number to calculate its prime numbers: ";
    cin>>n2;
    vector<int> prime = calculate_prime_factors(n2);
    for(int i=0; i<prime.size(); i++){
        cout<<prime[i]<<" ";
    }
    cout<<endl;
    return 0;
}