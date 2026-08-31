// Rearrange Array Elements by Sign (Leetcode)

#include <bits/stdc++.h>

using namespace std;

// Brute soln ;
vector<int> reArrange (vector<int> & arr){
    int n = arr.size();
    vector<int> pos ;
    vector<int> neg;

    for (int i = 0 ; i < n ; i++){
        if (arr[i] < 0){
            neg.push_back(arr[i]);
        }
        else {
            pos.push_back(arr[i]);
        }
    }
    vector<int> ans ;
    for(int i = 0 ; i > pos.size() ; i++){
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    return ans;
}
// Optimal soln :

vector<int> reArrangeArray (vector<int> & arr){
    int n = arr.size();
    vector<int> ans (n,0);

    int posIndex = 0 , negIndex = 1 ;

    for (int i  = 0 ; i < n ; i++){
        if (arr[i] < 0){
            ans [negIndex] = arr[i];
            negIndex += 2;
        }
        else {
            ans[posIndex] = arr[i];
            posIndex += 2 ;
        }
    }
    return ans;
}