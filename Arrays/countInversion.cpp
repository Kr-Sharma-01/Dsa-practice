#include<bits/stdc++.h>

using namespace std ;

// Brute Soln : TC : O(n^2)

int count (vector<int> & arr){
    int count = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1; j < arr.size() ; j++){
            if (arr[i] > arr[j]){
                count += 1;
            }
        }
    }    
}

// Optimal Soln : TC O(n log n )

int CountInversion (vector<int> & arr , int low , int mid  , int high){
    int count = 0;
    vector<int> temp ;
    int left = low ;
    int right = mid+1 ; 
    while( left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            count += (mid - left + 1);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }
    return count;
}

int ms (vector<int> & arr , int low , int high){
    int cnt = 0;
    if ( low == high) return;
    int mid = (low + high) / 2;
    cnt += ms(arr , low , mid);
    cnt += ms(arr , mid+1 , high);
    cnt += CountInversion(arr , low , mid , high); 
    return cnt ;
}