// Sort an array with 0s , 1s and 2s (Leetcode)

#include <iostream>
#include <vector>

using namespace std;

// Brute soln : Sorting

// Optimal soln :

vector<int> sorting (vector<int> & arr){
    int low = 0 , mid = 0 , high = arr.size()-1 ;
    while(mid <= high){

        if(arr[mid]==0){
            swap(arr[mid] , arr[low]);
            low++;
            mid++;
        }

        else if (arr[mid]==1){
            mid++;
        }

        else {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
return arr;
}


int main (){
    vector<int> arr  = {0,1,0,1,1,0,2,1,0,2};
    vector<int> ans = sorting(arr);
    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}