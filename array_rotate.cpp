// Rotate an array by one place left
// Optimal soln:

#include<iostream>
#include<vector>

using namespace std;

int rotate (vector<int> & arr){
    int temp = arr[0];
    for (int i =1 ; i<arr.size() ; i++){
        arr[i-1] = arr[i];
        }
    arr[arr.size()-1] = temp;
    return 0;
}    

int main (){
    vector<int> arr = {1,2,3,4,5,6};

    rotate(arr);

    cout << "Rotated array is : ";
    for (int x:arr){
        cout << x <<" ";
    }
    return 0;
}