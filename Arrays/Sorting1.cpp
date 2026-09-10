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

// Bubble Sort : TC : O(n^2) , best : O(n)

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

// Insertion Sort : TC : O(n^2) , best : O(n)

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

// Merge Sort : TC : O(Log n * n)

void merge (vector<int> & arr , int low , int mid  , int high){
    vector<int> temp ;
    int left = low ;
    int right = mid+1 ; 
    while( left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }
}

void ms (vector<int> & arr , int low , int high){
    if ( low == high) return;
    int mid = (low + high) / 2;
    ms(arr , low , mid);
    ms(arr , mid+1 , high);
    merge(arr , low , mid , high); 
}

// Quick Sort : TC : O(n Log n)

int quick(int arr[], int low, int high) {
    int pivot = arr[high];   
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void qs(int arr[], int low, int high) {
    if (low < high) {
        int pi = quick(arr, low, high);
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
}
