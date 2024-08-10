#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    int i=0;
    int n =0; //No of columns
    vector<char> row1;
    vector<char> row2;
    vector<string> output;
    char element = 0;
    int counter = 0;
    while(i<t){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>element;
            row1.push_back(element);
        }
        for(int i=0; i<n; i++){
            cin>>element;
            row2.push_back(element);
        }
        for(int i=0; i<n; i++){
            if((row1[i]==row2[i]) || (row1[i]=='G'&&row2[i]=='B') || (row1[i]=='B'&&row2[i]=='G'))
                counter++;
        }
        if(counter == n)
            output.push_back("YES");
        else
            output.push_back("NO");
        row1.clear();
        row2.clear();
        counter = 0;
        i++;
    }
    for(string value:output){
        cout<<value<<endl;
    }
    return 0;
}