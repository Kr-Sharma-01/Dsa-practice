// Removing duplicates from sorted array 

#include<iostream>
#include<vector>
#include<set>

using namespace std;

// Brute force soln: 

/*
int duplicates(vector<int> & arr){
    set<int> st;
    int n = arr.size();

    for(int i = 0 ; i<n ; i++){
        st.insert(arr[i]);
    }

    int index = 0 ;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    return index;
}
*/
int duplicates (vector<int> & arr){

    int i = 0;
    for (int j = 1 ; j<arr.size() ; j++){
        if (arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,3,4,5};
    int k = duplicates(arr);
    cout << "number of unique elements : " << k << endl;
    cout << "array after removing duplicates : ";
    for (int i = 0; i<k ; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}
