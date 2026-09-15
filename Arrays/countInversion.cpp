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

// Optimal Soln : TC O(n)

int CountInversions (vector<int> & arr){
    
}