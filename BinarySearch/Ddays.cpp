// Capacity To Ship Packages Within D Days (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            int requiredDays = 1;
            int currentWeight = 0;

            for (int w : weights) {
                if (currentWeight + w > mid) {
                    requiredDays++;
                    currentWeight = 0;
                }

                currentWeight += w;
            }

            if (requiredDays <= days)
                high = mid;      // capacity might be smaller
            else
                low = mid + 1;   // capacity is too small
        }

        return low;
    }
};
