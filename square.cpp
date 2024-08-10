#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> x_vec;
    vector<int> y_vec;
    vector<int> out_vec;
    int t=0; cin>>t; int i=0, x=0, y=0, area_x=0, area_y=0, area=0;
    while(i<t){
        for(int j=0; j<4; j++){
            cin>>x>>y;
            x_vec.push_back(x);
            y_vec.push_back(y);
        }
        for(int j=1; j<4; j++){
            if(x_vec[j] == x_vec[0])
                area_y = abs(y_vec[j]-y_vec[0]);
            if(y_vec[j] == y_vec[0])
                area_x = abs(x_vec[j]-x_vec[0]);
        }
        area = area_x * area_y ;
        out_vec.push_back(area);
        x_vec.clear(); y_vec.clear();
        i++;
    }
    for(int val : out_vec){
        cout<<val<<endl;
    }
    return 0;
}