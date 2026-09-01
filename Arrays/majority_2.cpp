// Majority Elements - 2 (Leetcode)

#include<bits/stdc++.h>

using namespace std;

// Brute Soln : (TC : O(N^2), SC : O(N))

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

// Better Soln : Hashing  (TC : O(N) , SC : O(N))

vector<int> MajEl (vector<int> & arr){
    unordered_map<int , int> mpp;
    vector<int> ls;
    int n = arr.size();
    int min = n/3 + 1 ;

    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
        if(arr[i] == min){
            ls.push_back(arr[i]);
        }
    }
    return ls;
}

// Optimal Soln : TC : O(2N) , SC : O(1)

vector<int> MajorityElement (vector<int> & arr){
    int n = arr.size();
    int cnt1 = 0 , cnt2 = 0;
    int el1 = INT_MIN , el2 = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(cnt1 == 0 && el2 != arr[i]){
            cnt1 = 1;
            el1 = arr[i];
        }
        else if(cnt2 == 0 && el1 != arr[i]){
            cnt2 = 1;
            el2 = arr[i];
        }
        else if(arr[i] == el1){
            cnt1++;
        }
        else if(arr[i] == el2){
            cnt2++;
        }
        else {
            cnt1-- , cnt2-- ;
        }
    }

    vector<int> ans;
    int count1 = 0 , count2 = 0;
    for(int i = 0 ; i< n ; i++){
        if(el1 == arr[i]){
            count1++;
        }
        if(el2 == arr[i]){
            count2++;
        }
    }
    int mini = n/3 + 1;
    if(count1 >= mini){
        ans.push_back(el1);
    }
    if(count2 >= mini){
        ans.push_back(el2);
    }
    return ans;
}
 
