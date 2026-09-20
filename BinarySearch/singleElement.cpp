// Single Element in Rotated Sorted Array (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Brute Soln : TC O(n)

int single(vector<int> & arr){
    int n = arr.size();
     for(int i = 0 ; i < n ; i++){
        if(i == 0){
            if(arr[i] != arr[i+1]) return arr[0];
        }
        else if(i == n-1){
            if(arr[i] != arr[n-2]) return arr[i];
        }
        else{
            if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
                return arr[i];
            }
        }
    }
    return -1;
}

// Optimal Soln : TC O(log n)

int SingleElement (vector<int> & arr){
    int n = arr.size();
    int low = 0 , high = n-1;

    while(low <= high){
        if(n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];

        int mid = (low + high)/2;

        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
            return arr[mid];
        }

        if((mid % 2 == 1 && arr[mid-1] == arr[mid]) || (mid % 2 == 0 && arr[mid] == arr[mid+1])){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}