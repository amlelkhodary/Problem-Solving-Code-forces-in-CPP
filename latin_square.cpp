#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<char>> matrix;
    vector<char> output;
    int rows=3, cols=3, index=0, t=0, i=0, elem=0;
    cin>>t;
    char missed;
    matrix.resize(rows, vector<char>(cols));
    // char matrix[rows][cols];
    while(i<t){
        bool a_found = false, b_found = false, c_found = false;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cin>>matrix[i][j];
                if(matrix[i][j] == '?')
                    index = i;
            }
        }
        for(int j=0; j<cols; j++){
            if(matrix[index][j] == 'A')
                a_found = true;
            else if(matrix[index][j] == 'B')
                b_found = true;
            else if(matrix[index][j] == 'C')
                c_found = true;  
        }
        if(a_found&&b_found)
            missed = 'C';
        else if(a_found&&c_found)
            missed = 'B';
        else if(b_found&&c_found)
            missed = 'A';
        output.push_back(missed);
        // matrix.clear();
        i++;
    }
    for(char val:output){
        cout<<val<<endl;
    }
    return 0;
}