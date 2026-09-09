// Sorting (Psuedo codes)

#include<bits/stdc++.h>

using namespace std ;

// Selection Sort : TC = O(n^2)

void selection (vector<int> & arr){
    int n = arr.size();
    for(int i = 0 ; i < n-2 ; i++){
        int mini = i;
        for(int j = i ; j < n-1 ; j++){
            if (arr[j] < arr[mini]){
            mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort : TC : O(n^2)

void bubble (vector<int> & arr){
    int n = arr.size();
    for (int i = n-1 ; i <= 0 ; i--){
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Insertion Sort : TC : O()

void insertion (vector<int> & arr){
    int n = arr.size();
    for (int i = 0 ; i < n ; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
}

// Merge Sort : TC : O()

void merge (vector<int> & arr){

}