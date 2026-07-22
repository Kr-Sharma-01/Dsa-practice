// Two sum (Leetcode)

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

//brute soln :

/*

vector<int> sum (vector<int> & arr , int target){
    for (int i = 0 ; i < arr.size() ; i++){
        for (int j = i+1 ; j < arr.size() ; j++){
            if (arr[i] + arr[j] == target){
                return {i,j};
            }
        }
    }
 return {};
}
*/

//Optimal Soln :

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};        
    }
    

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans = twoSum(arr, 5);
    for (int x: ans) {
        cout << x << " ";
    }
    return 0;
}