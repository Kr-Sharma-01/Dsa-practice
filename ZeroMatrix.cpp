// Set Zero Matrix (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Brute soln :

vector<int> zero (vector<vector<int>> & arr){
    int n = arr.size();
    int m = arr[0].size();

    vector<int> row (n , 0);
    vector<int> col (m , 0);

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i =0 ; i <n ; i++){
        for (int j =0 ; j < m ; j++){
            if ( row[i] == 1 || col[j] == 1){
                arr[i][j] = 0;
            }
        }
    }
}


// Optimal soln :
