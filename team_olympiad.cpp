#include<iostream>
#include<vector>
int find_min(std::vector<int> vec){
    int min=vec[0];
    for(int i=1; i<vec.size(); i++){
        if(vec[i]<min)
            min=vec[i];
    }
    return min;
}
int main(){
    int n = 0;
    std::cin>>n;
    int i=0;
    int arr[n];
    int one_counter=0, two_counter=0, three_counter=0, teams=0;
    std::vector<int> number_counts;
    std::vector<int> one_indices;
    std::vector<int> two_indices;
    std::vector<int> three_indices;
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            one_counter++;
            one_indices.push_back(i+1);
        }            
        else if(arr[i] == 2){
            two_counter++;
            two_indices.push_back(i+1);
        }            
        else if(arr[i] == 3){
            three_counter++;
            three_indices.push_back(i+1);
        }           
    }

    number_counts.push_back(one_counter);
    number_counts.push_back(two_counter);
    number_counts.push_back(three_counter);
    teams = find_min(number_counts);
    std::cout<<teams<<std::endl;

    for(int i=0; i<teams; i++){
        std::cout<<one_indices[i]<<" "<<two_indices[i]<<" "<<three_indices[i]<<std::endl;
    }
    
    return 0;
}