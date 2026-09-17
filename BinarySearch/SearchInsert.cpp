// Search Insert Position (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Optimal Soln : TC O(log n)

int Search (vector<int> & arr , int target){
    int n = arr.size();
    int ans = n ;
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if( arr[mid] >= target){
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid +1;
        }
    }
    return ans;
}