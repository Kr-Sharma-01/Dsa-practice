// Maximum consecutive ones in an array (Leetcode)

#include<iostream>
#include<vector>

using namespace std;

//Optimal soln:

int ones (vector<int> & arr){
     int count = 0;
        int maxCount = 0;

        for (int num : arr) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

return maxCount;

}

int main (){
    vector<int> arr = {1,1,1,0,1,1};
    int ans = ones(arr);
    cout << "Maximum consecutive ones are : " << ans ;
    return 0;
        
}