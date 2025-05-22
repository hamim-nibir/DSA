#include <bits/stdc++.h>
using namespace std;

#define el endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        // cout << arr << el;
        int cnt=0;
        int oneCnt=0;
        for(int i=0; i<n; i++){
            if(arr[i] == '0'){
                cnt++;
            } else if(arr[i] == '1'){
                oneCnt++;
            }
        }
        // cout << oneCnt << el;
        // cout << cnt << el;
        cnt += (oneCnt*(n-1));
        cout << cnt << el;
    }
    return 0;
}