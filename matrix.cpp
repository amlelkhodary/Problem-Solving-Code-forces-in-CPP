#include <iostream>
int main(){
    int mat[5][5];
    int movements = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            std::cin>>mat[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j] == 1){
                movements+=abs(j-2);
                movements+=abs(i-2);
            }
        }
    }
    std::cout<<movements;
    return 0;
}
