// Maximum subaaray (Leetcode)

#include<iostream>
#include<vector>

using namespace std;

// Optimal soln :

int maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maximum = nums[0];

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if (sum > maximum) {
                maximum = sum;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        return maximum;
    }


int main() {

       vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum = " << maxSubArray(nums);

    return 0;
}