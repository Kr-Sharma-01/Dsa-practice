// Floor and Ceil in Sorted array 

#include<bits/stdc++.h>

using namespace std ;

// Finding Floor

int floor (vector<int> & arr , int target){
    int n = arr.size();
    int ans = -1 ;
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return ans ;
}

// Finding Ceil 

int ceil (vector<int> & arr , int target){
    int n = arr.size();
    int ans = -1 ;
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= target){
            ans = arr[mid];
            high = mid - 1 ;
        }
        else{
            low = mid +1;
        }
    }
    return ans ;
}
