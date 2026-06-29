#include<iostream>
#include<vector>

using namespace std;

// Brute soln : 
/*
int missing (vector<int> & arr){

    for (int i = 1 ; i < arr.size()+1 ; i++){
        int flag = 0;
        for (int j = 0; j < arr.size() ; j++){
            if (arr[j] == i){
                flag = 1;
                break;
               }        
           }
        if (flag == 0){
            return i;    
        }
    }
    return 0;

}
*/

// Optimal :

int missing (vector<int> & arr , int N){
    int xor1 = 0 ; 
    int xor2 = 0; 
    int n = N-1;
    for(int i = 0 ; i < arr.size() ; i++){
        xor2  ^=  arr[i];
        xor1  ^= (i+1);
    }
    xor1 ^= N;
    return xor1 ^ xor2;
}

int main (){
    vector<int> arr = {1,2,3,5};
    int ans = missing(arr , 5);
    cout << "missing element is : " << ans ;
    return 0;
        
}