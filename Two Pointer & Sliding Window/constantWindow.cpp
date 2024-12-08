#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-1, 3, 5, 5, 4, 9, 2, -1, -2, 3};
    int n = sizeof(arr)/sizeof(int);
    // cout << n;
    int k=4;
    int l=0, r = k-1, sum=0, maxSum=0;
    for(int i=l; i<=r; i++){
        sum = sum + arr[i];
    }
    while(r<n-1){
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << endl;
    return 0;
}