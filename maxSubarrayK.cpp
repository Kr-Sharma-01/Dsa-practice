// Maximum subaaray (Leetcode)

#include<iostream>
#include<vector>

using namespace std;

// Optimal soln :

int maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        return maxi;
    }


int main() {

       vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum = " << maxSubArray(nums);

    return 0;
}