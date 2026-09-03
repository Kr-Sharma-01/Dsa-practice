// Count Subarray with xor K 

#include<bits/stdc++.h>

using namespace std;

// Brute Soln : TC : O(N^2) , SC : O(1)

int count (vector<int> & arr , int k){
    int count = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        int Xor = 0 ;
        for(int j = i ; j < arr.size() ; j++){
            Xor = Xor ^ arr[j];
            if (Xor == k ) count++;
        }
    }
    return count ; 
}

// Optimal Soln : TC : O() , SC : O()

int XorCount (vector<int> & arr){
    
}