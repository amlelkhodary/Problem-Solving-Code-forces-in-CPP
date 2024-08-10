#include<iostream>
#include<vector>
using namespace std;
int find_max (int num1, int num2){
    if (num1 > num2)
        return num1;
    else    
        return num2;
}
int main(){
    int t = 0, n = 0, a = 0, b = 0, i = 0, j = 0, index = 0;
    vector<int> a_vec;
    vector<int> b_vec;
    vector<int> out_vec;
    cin>>t;
    while(i<t){
        cin>>n;
        j = 0;
        while(j<n){
            cin>>a;
            cin>>b;
            a_vec.push_back(a);
            b_vec.push_back(b);
            j++;
        }
        int max_here = 0 ;
        int max_all = 0;
        for(int k=0; k<n; k++){
            if(a_vec[k] <= 10){
                max_here = find_max(max_here, b_vec[k]);
                if(max_here>max_all)
                    index = k+1;
                max_all = find_max(max_all, max_here);
            }
        }
        out_vec.push_back(index);
        a_vec.clear();
        b_vec.clear();
        i++;
    }
    for(int val : out_vec){
        cout<<val<<endl;
    }
    return 0;
}