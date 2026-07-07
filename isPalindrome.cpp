// Is the number palindrome (Leetcode)
#include <iostream>
#include <vector>

using namespace std;

// Optimal soln :

bool isPalindrome(int x) {  
        if (x < 0) {
            return false;
        }

        int original = x;
        long long reverse = 0;

        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        return original == reverse;
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Is Palindrome";
    else
        cout << "Is not Palindrome";

    return 0;
}