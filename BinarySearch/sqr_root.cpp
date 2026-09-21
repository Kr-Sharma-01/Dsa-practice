// Square Root in Array using BS 

#include<bits/stdc++.h>

using namespace std ;

// Optimal soln : TC O(log n)

int SqrRoot (int n){
    int low = 1 , high = n;
    while(low <= high){
        int mid = (low + high)/2;
        int val = (mid * mid);

        if(val <= n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}