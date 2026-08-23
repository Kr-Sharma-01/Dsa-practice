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
    
}