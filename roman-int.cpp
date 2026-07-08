// Roman number to integer (Leetcode)

#include<iostream>
#include<unordered_map>

using namespace std;

// Optimal soln :

int RomanToInt (string s){

    unordered_map<char , int> value = {
        {'I' , 1},
        {'V' , 5},
        {'X' , 10},
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000}
    };

    int ans = 0;
     
    for(int i = 0 ; i < s.length() ; i++){
        if ( i < s.length()-1 && value[s[i]]<value[s[i+1]]){
            ans -= value[s[i]];
        }
        else{
            ans += value[s[i]];
        }
    }
return ans;
}

int main (){
    string s ;
    cout << "Enter roman number : " ; 
    cin >> s ;
    int answer = RomanToInt(s);
    cout <<"The number is : " << answer ;  
}