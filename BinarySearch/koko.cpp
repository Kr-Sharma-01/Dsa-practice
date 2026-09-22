// Koko Eating Bananas (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Optimal Soln : TC O(n * log(max))

int findmax (vector<int> & arr){
    int maxi = INT_MIN ;

    for(int i = 0 ; i < arr.size() ; i++){
        maxi = max(arr[i] , maxi);
    }
    return maxi;
}

long long totalhrs (vector<int> & arr , int hourly){
    long long hrs = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        hrs += (arr[i] + (long long) hourly - 1) / hourly ;
    }
    return hrs;
}

int banana (vector<int> & arr , int h){
    int low = 1 , high = findmax(arr);

    while(low <= high){
        int mid = low + (high - low) / 2 ;

        long long hrs = totalhrs(arr , mid);

        if(hrs <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low ;
}
