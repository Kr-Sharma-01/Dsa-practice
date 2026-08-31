// Count Subarray sum Equals K (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Brute soln :

int CountSum (vector<int> & arr , int k){
    int n = arr.size();
    int sum = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
    return count;
    }
}

// Optimal Soln :

int CountSubarraySum (vector<int> & arr , int k){
    int n = arr.size();
    unordered_map<int , int> mpp;
    mpp[0] = 1;
    int presum = 0 , count = 0;

    for(int i = 0 ; i < n ; i++){
        presum += arr[i];
        int remove = presum - k;
        count += mpp[remove];
        mpp[presum] += 1;
    }
    return count ;
}