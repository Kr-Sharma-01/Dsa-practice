// Maximum Product Subarray (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Brute soln : TC : O(n^2) SC : O(1)
int sub (vector<int> & arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        int prd = 1;
        for(int j = i ; j < n ; j++){
            prd = prd * arr[j];
            maxi = max(maxi , prd);
        } 
    }
    return maxi;
}


// Optimal Soln : TC : O(n) , SC : O(1)

int MaxSubarray (vector<int> & arr){
    int n = arr.size();
    int prefix = 1 , suffix = 1;
    int maxi = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;

        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];

        maxi = max(maxi , max(prefix , suffix));
    }
    return maxi;
}