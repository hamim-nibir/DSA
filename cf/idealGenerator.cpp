#include <bits/stdc++.h>
using namespace std;

#define el endl

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int k;
        cin >> k;
        if(k%2 == 0){
            cout << "NO" << el;
        } else {
            cout << "YES" << el;
        }
    }
    return 0;
}