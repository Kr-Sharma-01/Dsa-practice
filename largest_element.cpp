//Largest element in an array 

 //Brute solution :-

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr = {1,2,3,4,5};

/*
int largest_element ( vector <int> & arr){
    sort(arr.begin() , arr.end());
    return arr[arr.size() - 1];}

int main () {
    vector<int> arr = {1,2,3,4,5};
    cout << "Largest number is " << largest_element(arr);
    return 0;
}

*/

// Optimal solution :-

int largest (vector<int> & arr){
    int max = arr[0];
    int n = arr.size();

    for (int i =0 ; i<n ; i++){
        if (arr[i]> max ){
            max = arr[i];
        }
    }
    return max;
}

int main (){
    vector<int> arr = {1,2,3,4,5};
    cout << "Largest number is " <<largest(arr);
    return 0;

}