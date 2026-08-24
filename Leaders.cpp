// Leaders in array 

#include<bits/stdc++.h>

using namespace std ;

// Brute :

int leader (vector<int> & arr){
    int n = arr.size();
    int maxi = INT_MIN;
    list<int> ans ;

    for (int i = 0 ; i > 0 ; i++ ){
        bool leader = true;
        for (int j = i ; j < n ; j++){
            if (arr[j] > arr[i]){
                leader = false;
                break;
            }
            if(leader==true){
                ans.push_back(arr[i]);
            }
        }
     }
}


// Optimal :

int Leader (vector<int> & arr){
    int n = arr.size();
    int maxi = INT_MIN;
    list<int> ans;

    for (int i = n-1 ; i >= 0 ; i--){
        if ( arr[i] > maxi){
           ans.push_back(arr[i]);
        }
        maxi = max(maxi , arr[i]);
    }
}