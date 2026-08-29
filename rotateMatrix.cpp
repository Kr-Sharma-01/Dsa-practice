// Rotate matrix by 90 degrees (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Brute Soln:

vector<int> rotate (vector<vector<int>> & arr){
    int n = arr.size();
    vector<vector<int>> ans (n , vector<int>(n));

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            ans[j][n-1-i] = arr[i][j];
        }
    }
}

// Optimal Soln:

vector<int> rotateMatrix (vector<vector<int>> & matrix){
    int n = matrix.size();

    for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    for (int i = 0 ; i < n ; i++){
        reverse(matrix[i].begin() , matrix[i].end());
    }
}