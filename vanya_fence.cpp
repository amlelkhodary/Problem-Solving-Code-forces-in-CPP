#include<iostream>
#include<vector>
using namespace std;
int main(){
    int friends_no = 0;
    int fence_height = 0;
    int fence_width = 0;
    int max_width = 0;
    cin>>friends_no>>fence_height;
    int element = 0;
    for(int i=0; i<friends_no; i++){
        cin>>element;
        if(element > fence_height)
            fence_width = 2;
        else
            fence_width = 1;
        max_width += fence_width;
    }
    cout<<max_width<<endl;
    return 0;
}