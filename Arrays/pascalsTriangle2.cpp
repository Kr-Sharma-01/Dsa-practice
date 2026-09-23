// Pascals Triangle (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Optimal Soln : TC : O(n^2)

vector<int> triangle(vector<int> & arr){

    vector<int> ans ;

    ans.push_back(1);

    for(int i = 0 ; i  < arr.size() ; i++){
        ans.push_back(1);
        for (int j = i-1 ; j < 0 ; j--){
            ans[j] = ans[j] + ans[j - 1];
            
        }       
    }

    return ans;
}