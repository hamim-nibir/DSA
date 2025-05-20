#include <bits/stdc++.h>
using namespace std;

#define el endl

bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    for(auto elem : queries){
        int l = elem[0];
        int r = elem[1];
        for(int i=l; i<=r; i++){
            if(nums[i]>0){
                nums[i]--;
            }
        }
    }
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != 0){
            cout << "false" << el;
            return false;
        }
    }
    cout << "true" << el;
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