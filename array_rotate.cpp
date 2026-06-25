// Rotate an array by one place left
// Optimal soln:

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 /*
int rotate (vector<int> & arr){
    int temp = arr[0];
    for (int i =1 ; i<arr.size() ; i++){
        arr[i-1] = arr[i];
        }
    arr[arr.size()-1] = temp;
    return 0;
}    
*/

// Rotating array k times left 

void rotate(vector<int> & arr , int k){
    int n = arr.size();
    k = k%n;
    reverse(arr.begin() , arr.begin()+k);
    reverse(arr.begin()+k , arr.end());
    reverse(arr.begin() , arr.end());
}


int main (){
    vector<int> arr = {1,2,3,4,5,6};
    int k = 3;
    rotate(arr , k);

    cout << "Rotated array is : ";
    for (int x:arr){
        cout << x <<" ";
    }
    return 0;
}