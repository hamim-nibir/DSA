//two pointer approach -> O(nlogn)

#include <bits/stdc++.h>
using namespace std;

#define el endl

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> actual = nums;
    sort(nums.begin(), nums.end());
    int st = 0, en = nums.size() - 1;
    int first, second;
    while(st < en){
        int sum = nums[st] + nums[en];
        if(sum > target){
            en--;
        } else if(sum < target){
            st++;
        } else {
            first = nums[st];
            second = nums[en];
            break;
        }
    }
    vector<int> res;
    for(int i=0; i<actual.size(); i++){
        if(actual[i] == first){
            res.push_back(i);
        } else if(actual[i] == second){
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    vector<int> arr = {15,2,11,7};
    int target = 9;
    vector<int> res = twoSum(arr, target);
    for(auto elem : res){
        cout << elem << " ";
    }
    return 0;
}