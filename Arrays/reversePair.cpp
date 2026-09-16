#include<bits/stdc++.h>

using namespace std ;

// Brute Soln : TC O(n^2)
int pair (vector <int> & arr){
    int count = 0 ;
    for (int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ; j < arr.size() ; j++){
            if (arr[i] > 2*arr[j]){
                count++;
            }
        }
    }
    return count ;
}

// Optimal Soln : TC O()

class Solution {
public:

    int merge(vector<int>& nums, int low, int mid, int high) {

        int count = 0;

        // Count reverse pairs
        int j = mid + 1;

        for (int i = low; i <= mid; i++) {

            while (j <= high &&
                   (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

            count += j - (mid + 1);
        }

        // Normal merge
        vector<int> temp;

        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {

            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // Put sorted elements back
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return count;
    }

    int mergeSort(vector<int>& nums, int low, int high) {

        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        int count = 0;

        count += mergeSort(nums, low, mid);

        count += mergeSort(nums, mid + 1, high);

        count += merge(nums, low, mid, high);

        return count;
    }

    int reversePairs(vector<int>& nums) {

        return mergeSort(nums, 0, nums.size() - 1);
    }
};