// Remove element (Leetcode)

#include<iostream>
#include<vector>

using namespace std;

// Optimal soln :

int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }


    int main() {
    vector<int> arr = {1,2,3,4,5};
    int ans = removeElement(arr, 5);
    cout << ans ; 
    return 0;
    }