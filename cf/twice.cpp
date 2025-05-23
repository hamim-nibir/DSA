#include <bits/stdc++.h>
using namespace std;

#define el endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int curr = arr[0];
        int ans=0;
        for(int i=1; i<n; i++){
            if(arr[i] == curr){
                // cout << "Y" << el;
                ans++;
                curr = INT_MIN;
            }else {
                // cout << "N" << el;
                curr = arr[i];
            }
        }
        cout << ans << el;
    }
    return 0;
}