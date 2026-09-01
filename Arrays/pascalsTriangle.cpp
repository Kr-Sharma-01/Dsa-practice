// Pascals Triangle (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Optimal Soln : TC : O(N^2) , SC : O(N^2)

vector<vector<int>> triangle (int Numrows){
    vector<vector<int>> ans;

    for(int i = 0 ; i < Numrows ; i++){

        vector<int> row (i + 1 , 1);
        
        for(int j = 1 ; j < i ; j++){
            row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }

        ans.push_back(row);
    }
    return ans;
}