//not solved yet

#include <bits/stdc++.h>
using namespace std;

#define el endl

bool isPalindrome(int x){
    stack<int> stk;
    while(x>0){
        int y = x%10;
        stk.push(y);
        x = x/10;
    }
    int num1 = 0;
    int pow = 1;
    while(!stk.empty()){
        int y = stk.top();
        num1 += (y*pow);
        pow *= 10;
        stk.pop();
    }
    if(x == num1){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    bool res = isPalindrome(n);
    cout << res << el;
    if(res == 0){
        cout << "true" << el; 
    } else {
        cout << "false" << el;
    }
    return 0;
}