#include <bits/stdc++.h>
using namespace std;

#define el endl

bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> res(n, 0);
    for(int i=0; i<queries.size(); i++){
        int l = queries[i][0];
        int r = queries[i][1];
        res[l]--;
        if(r+1 < nums.size()){
            res[r+1]++;
        }

    }
    for(int i=1; i<n; i++){
        res[i] = res[i] + res[i-1];
    }
    for(int i=0; i<n; i++){
        nums[i] = max(nums[i] + res[i], 0);
    }
    for(int i=0; i<n; i++){
        if(nums[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums = {1,0,1};
    vector<vector<int>> queries = {{0,2}};
    bool ans = isZeroArray(nums, queries);
    if(ans == 0){
        cout << "false" << el;
    } else {
        cout << "true" << el;
    }
    return 0;
}