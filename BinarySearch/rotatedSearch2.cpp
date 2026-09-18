// Search Element in Rotated Sorted Array - 2 (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Optimal Soln : TC O(log n)

int Search (vector<int> & arr , int target){
    int n = arr.size();
    int low = 0 , high = n-1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid ;

        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++ , high--;
            continue;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] <= target &&  target < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}