// Smallest Missing Integer Greater Than Sequential Prefix Sum (leetcode) 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Optimal soln :

int missingInteger(vector<int>& nums) {
    int sum = nums[0];

    // Find sum of the sequential prefix
    int i = 1;

    while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
        sum += nums[i];
        i++;
    }

    // Store all elements in a set
    unordered_set<int> st(nums.begin(), nums.end());

    // Find the smallest missing integer >= sum
    while (st.count(sum)) {
        sum++;
    }

    return sum;
}

int main() {

    vector<int> nums = {3, 4, 5, 1, 2};

    int ans = missingInteger(nums);

    cout << "Answer: " << ans << endl;

    return 0;
}