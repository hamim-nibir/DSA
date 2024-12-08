#include<bits/stdc++.h>
using namespace std;

void fillPrefixSum(vector<int> &vec, int n, vector<int> &pvec){
    pvec[0] = vec[0];
    
    for(int i=1; i<n; i++){
        pvec[i] = pvec[i-1] + vec[i];
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    vector <int> vec = {10, 20, 30, 40, 50};
    int n = vec.size();
    vector <int> pvec(n,0);
    
    fillPrefixSum(vec, n, pvec);
    for(int i=0; i<n; i++){
        cout << pvec[i] << " ";
    }

    return 0;
}