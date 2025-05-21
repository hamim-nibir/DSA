#include <bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int g=0, cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] >= k){
                g += arr[i];
            } else if(arr[i] == 0 && g>0){
                cnt++;
                g--;
            }
        }
        
        cout << cnt << endl;
    }
    return 0;
}