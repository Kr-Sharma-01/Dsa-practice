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


// Better Soln :

vector<int> Consecutive (vector<int> & arr){
    sort(arr.begin() , arr.end());
    int largest = 1 , count = 0 , lastSmallest = INT_MIN;

    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i]-1 == lastSmallest){
            count = count +1;
            lastSmallest = arr[i];
        }
        else if (arr[i] != lastSmallest){
            lastSmallest == arr[i];
            count = 1;
        }
        largest = max (largest , count);
    }
    return {largest};
}

// Optimal soln:

vector<int> ConsecutiveSequence (vector<int> & arr){
    if (arr.size()==0){ return {};}
    int longest =1;
    unordered_set<int> st; 
    for (int i = 0 ; i < arr.size() ; i++){
        st.insert(arr[i]);
    }

    for (auto it : st){
        if (st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while (st.find(x+1) != st.end()){
                
            }
        }
    }
}