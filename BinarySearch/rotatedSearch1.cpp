// Search Element in Rotated Sorted Array - 1 (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Brute Soln : TC O(n)

int search (vector<int> & arr , int target){
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

// Optimal Soln : TC O(log n)

int rotatedSearch (vector<int> & arr , int target){
    int n = arr.size();
    int low = 0 , high = n-1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;
       
        // Left sort

        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1 ;
            }
        }

        // Right Sort
        
        else{
            if (arr[mid] <= target && target >= arr[high]){
                low = mid + 1 ;
            }
            else{
                high = mid - 1 ;
            }
        }
        return -1;
    }
}