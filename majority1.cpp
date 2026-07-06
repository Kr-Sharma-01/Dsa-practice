#include<iostream>
#include<vector>

using namespace std;

int majorityElement (vector<int> & arr){
    for(int i =0 ; i< arr.size() ; i++){
        int count =0 ; 
        for(int j = 0 ; j< arr.size() ; j++){
            if (arr[j]==arr[i]){
                count++;
            }
            if (count > arr.size()/2 ){
                return arr[i];
            }
        }
    }
 return 0;
}

int main (){
    vector<int> arr = {1,1,4,4,4,3,4};
    int ans = majorityElement(arr);
    cout << ans;
}