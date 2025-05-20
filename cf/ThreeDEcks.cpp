#include <bits/stdc++.h>
using namespace std;

#define el endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int x = (a+b+c)/3;
        if((a+b+c)%3 == 0 && b<=x){
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }
    return 0;
}