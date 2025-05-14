// check whether a number is a prime number or not

#include <bits/stdc++.h>
using namespace std;

#define el endl

int main(){
    int n;
    bool flag = true;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    
    if(flag == true) cout << "Yes";
    else cout << "No";
    return 0;
}