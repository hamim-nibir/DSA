#include <bits/stdc++.h>
using namespace std;

#define el endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string res = "NO";
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int zero = 0, one = 0;
        for(auto elem : arr){
            if(elem == 0){
                zero++;
            } else if(elem == 1){
                one++;
            }
        }
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i] == 0 && arr[i+1] == 0){

                res = "YES";
                break;
            }
        }
        if(one == arr.size()){
            res = "YES";
        } 
        cout << res << el;

    }
}