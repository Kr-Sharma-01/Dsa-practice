// Next permutation (Leetcode)

#include<bits/stdc++.h>
using namespace std;

// brute 
/*
Reccursion : generate all -> Linear search -> find 
*/

// Optimal : this solves but with built in function of stl

vector<int> next (vector<int> & arr){
    next_permutation(arr.begin() , arr.end());
}

// Optimal : Genralized 

vector<int> NextPermutation (vector<int> & arr){
    int n = arr.size();
    int ind = -1;
    for (int i = n-1 ; i<=0 ; i--){
        if (arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }
if (ind = -1){
    reverse(arr.begin() , arr.end());
    return ;
}    

for (int i = n-1 ; i > ind ; i--){
    if (arr[i] > arr[ind]){
        swap(arr[i] , ind);
        break;
    }
}

reverse(arr.begin()+ind+1 , arr.end());

}