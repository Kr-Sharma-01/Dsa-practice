// Longest Subarray with sum K

#include<bits/stdc++.h>

using namespace std;

int LongestSubarrayWithSumK ( vector<int> arr , long long k){
    map<long long , int > presumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0 ; i < arr.size() ; i++){
        sum += arr[i];
        
        if(sum == k ){
            maxLen = max(maxLen , i + 1);
        }
         long long rem = sum - k;

        if (presumMap.find(rem) != presumMap.end())
        {
            int len = i - presumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Store only first occurrence
        if (presumMap.find(sum) == presumMap.end())
        {
            presumMap[sum] = i;
        }
    }

    return maxLen;
}

