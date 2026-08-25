// Longest consecutive sequence (Leetcode - Google)

#include<bits/stdc++.h>

using namespace std;

// Brute soln :

bool linearSearch(vector<int>& a, int num) {
    int n = a.size(); 
        // Traverse through the array 
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
        return true;
    }
    return false;
}
int Longest (vector<int> & arr){
    int longest = 1;
    for (int i = 0 ; i < arr.size() ; i++){
        int x = arr[i];
        int count = 1;
        while (linearSearch(arr , x+1) == true ){
            x = x+1;
            count = count + 1;
        }
    }
}


// Optimal Soln :

int Consecutive (vector<int> & arr){
    
}