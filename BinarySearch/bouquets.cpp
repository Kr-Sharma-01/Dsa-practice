// Minimum days to make M bouquets (Leetcode)

#include<bits/stdc++.h>

using namespace std ;

// Optimal Soln 

    bool canMake(vector<int>& bloomDay, int m, int k, int day) {

        int flowers = 0;
        int bouquets = 0;

        for(int i = 0; i < bloomDay.size(); i++) {

            if(bloomDay[i] <= day) {
                flowers++;

                if(flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            }
            else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        long long required = 1LL * m * k;

        // Impossible to make enough bouquets
        if(required > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(canMake(bloomDay, m, k, mid)) {
                // mid works, try an earlier day
                high = mid - 1;
            }
            else {
                // mid doesn't work, need more days
                low = mid + 1;
            }
        }

        return low;
    }