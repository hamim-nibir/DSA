#include <bits/stdc++.h>
using namespace std;

#define el endl

string triangleType(vector<int>& nums) {
    string res;
    sort(nums.begin(), nums.end());
    if(nums[0] + nums[1] <= nums[2]){
        res = "none";
    } else{
        if(nums[0] == nums[1] && nums[1] == nums[2]){
            res = "equilateral";
        } else if(nums[0] != nums[1] && nums[0] != nums[2] && nums[1] != nums[2]){
            res = "scalene";
        } else {
            res = "isosceles";
        }
    }
    return res;
}

int main(){
    vector<int> nums;
    for(int i=0; i<3; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << triangleType(nums) << el;
    return 0;
}