
// Moving zeros to end of an array (Leetcode)

#include<iostream>
#include<vector>

using namespace std;

// Brute soln : 

/*
int move(vector<int> & arr){
    vector<int> temp ;
    for (int i =0 ; i<arr.size() ; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
        for (int i = 0 ; i < temp.size() ; i++){
            arr[i] = temp[i];
        }
        for (int i = temp.size() ; i<arr.size() ; i++ ){
            arr[i] = 0;
        }    
    return 0;   
}
*/

// Optimal soln : 

int move (vector<int> & arr){
    int j = -1;
    for (int i = 0 ; i < arr.size() ; i++ ){
        if (arr[i] == 0){
            j = i;
            break;
        }
    }
    for (int i = j+1 ; i<arr.size() ; i++){
        if (arr[i] != 0){
            swap(arr[i] , arr[j]);
            j++;
        }
    }
    return 0;
}

int main(){
    vector<int> arr = {1,2,0,0,5,0,2,0,5,0,0,0,5,3,3};
    move(arr);
    cout << "The new array is : ";
    for (int x:arr){
        cout << x << " ";
    }
    return 0;
}


