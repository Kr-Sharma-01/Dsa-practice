// Only one appearance of an element when other appears twice (Leetcode)  

#include<iostream>
#include<vector>

using namespace std;

// Brute Soln : 

/*

int ones (vector<int> & arr){
    for (int i = 0 ; i < arr.size() ; i++){
        int num = arr[i];
        int count = 0;
        for(int j = 0 ; j < arr.size() ; j++){
            if (arr[j] == num){
                count++;
            }
        }
        if (count == 1){
            return arr[i];
        }
    }
    return 0;
}
    */

// Optimal Soln :

int ones (vector<int> & arr){
    int xorr = 0 ;
    for (int i = 0 ; i < arr.size() ; i++){
        xorr = xorr ^ arr[i];        
    }
return xorr ;
}

int main (){
    vector<int> arr = {1,1,2,2,3,3,4,5,5};
    int ans = ones(arr);
    cout << "Element that appeared only once is : " << ans ;
    return 0;

}