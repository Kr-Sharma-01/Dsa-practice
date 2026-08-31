// Majority Elements - 2 (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Brute Soln :

vector<int> elements (vector<int> & arr){
    int n = arr.size();
    int count = 0;
    vector<int> ls ;
    for (int i = 0 ; i < n ; i++){
        if(ls.size() == 0 || ls[0] != arr[i]){
            for(int j = 0 ; j < n ; j++){
                if (arr[j] == arr[i]){
                    count++;
                }
            }
            if (count > (n/3)){
                ls.push_back(arr[i]);
            }
            if (ls.size() == 2){
                break;
            }
        }
    }
    return ls ; 
}

