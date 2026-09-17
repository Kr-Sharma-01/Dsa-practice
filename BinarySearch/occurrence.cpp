// First and Last Occurrences in Array (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Brute Soln : TC O(n)

vector<int> firstLast (vector<int> & arr , int target){
    int first = -1 , last = - 1;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == target){
            if (first == -1) first = i ;
            last = i ; 
        }
    }
    return {first , last};
}

// Optimal Soln : TC O(log n)

vector<int> searchRange(vector<int>& nums, int target) {
    int first = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
    if(first == nums.size() || nums[first]  != target){
        return {-1 , -1};
    }
    int last = upper_bound(nums.begin() , nums.end() , target) - nums.begin() - 1;
    return {first , last};
}

//  Using Binary

vector<int> searchRange(vector<int>& nums, int target) {
        
    // Find first occurrence
    int first = -1;
    int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;   // keep searching left
        }
     else if (nums[mid] < target) {
            low = mid + 1;
        }
    else {
       high = mid - 1;
        }
}

    // Find last occurrence
    int last = -1;
    low = 0;
    high = nums.size() - 1;
    while (low <= high) {
          int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;    // keep searching right
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return {first, last};
}