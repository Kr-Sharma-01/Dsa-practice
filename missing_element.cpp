#include<iostream>
#include<vector>

using namespace std;

int missing (vector<int> & arr){

    for (int i = 1 ; i < arr.size() ; i++){
        int flag = 0;
        for (int j = 0; j < arr.size()-1 ; j++){
            if (arr[j] == i){
                flag = 1;
            }
            if (flag = 0){
                return i;
            }
        }
    }
}

int main (){
    vector<int> arr = {1,2,3,5}
    
}