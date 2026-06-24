// Second largest element in an array 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> arr = {11,4,5,1,8};
int n = arr.size();

// brute force soln:
/*
int s_largest (vector<int> & arr){

    sort(arr.begin() , arr.end());
    int largest = arr[n-1];

    for(int i=n-2 ; i>=0 ; i-- ){
        if (arr[i] != largest ){
            return arr[i];
           
        }
    }
}
    */

// Optimal soln:

int second_largest (vector<int> & arr){
    int largest = 0;
    int s_largest = INT_MIN;

    for(int i=0; i<n ; i++){
        if(arr[i]>largest){
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>s_largest){
            s_largest = arr[i];
        }   
    }  
    return s_largest ; 

}

int main (){
    vector<int> arr = {11,4,5,1,8};
    cout << "Second largest number is : " << second_largest(arr);
    return 0;
}
