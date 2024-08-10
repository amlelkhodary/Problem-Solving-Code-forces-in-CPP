#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    vector<int> input;
    vector<string> output;
    int odd_counts = 0;
    int even_counts = 0;
    int i=0, element=0;
    int n=0; //No of ests
    while(i<t){
        cin>>n;
        for(int i=0; i<2*n; i++){
            cin>>element;
            input.push_back(element);
        }
        for(int i=0; i<2*n; i++){
            if(input[i] % 2 == 0)
                even_counts++;
            else    
                odd_counts++;
        }
        if(even_counts == odd_counts)
            output.push_back("YES");
        else    
           output.push_back("NO"); 
        input.clear();
        even_counts = 0;
        odd_counts = 0;
        i++;
    }
    for(string val:output){
        cout<<val<<endl;
    }
    return 0;
}