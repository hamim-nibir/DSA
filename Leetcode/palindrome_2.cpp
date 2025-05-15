//after converting the integer to string

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int x) {
    string str = to_string(x);
    stack<char> s;
    for (auto elem : str) {
        s.push(elem);
    }
    for (auto elem : str) {
        if (elem != s.top()) 
            return false;
        s.pop();
    }
    return true;
}

int main() {
    int str;
    cout << "Enter a word: ";
    cin >> str;

    if (checkPalindrome(str)) {
        cout << "It is a Palindrome.";
    } else {
        cout << "It is not a Palindrome.";
    }

    return 0;
}