// Plus one digit (Leetcode)

#include<iostream>
#include<vector>

using namespace std;

// Optimal Soln :

vector<int> addOne (vector<int> & arr){
    for (int i = arr.size()-1 ; i>=0 ; i--){
        if (arr[i]<9){
            arr[i]++;
            return arr;
        }
        arr[i]=0;
    }
    arr.insert(arr.begin() ,1);    return arr;
}

int main (){
    vector<int> arr = {1,2,3};
    vector<int> ans = addOne(arr);
    cout << "The plus one number is : ";
    for ( int x  : ans){
        cout << x ;
    }
    return 0;
}