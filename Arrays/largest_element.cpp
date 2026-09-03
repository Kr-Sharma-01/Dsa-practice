//Largest element in an array 

#include<bits/stdc++.h>

using namespace std;

vector<int> arr = {1,2,3,4,5};

// Brute Soln :

int largest_element ( vector <int> & arr){
    sort(arr.begin() , arr.end());
    return arr[arr.size() - 1];}

// Optimal Soln :-

int largest (vector<int> & arr){
    int max = arr[0];
    int n = arr.size();
    for (int i =0 ; i<n ; i++){
        if (arr[i]> max ){
            max = arr[i];
        }
    }
    return max;
}

