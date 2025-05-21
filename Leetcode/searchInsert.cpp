#include <bits/stdc++.h>
using namespace std;

#define el endl

int searchInsert(vector<int>& nums, int target) {
    int l=0, r = nums.size()-1;
    while(l<=r){
        int mid = l + (r - l) / 2;
        if(target == nums[mid]){
            return mid;
        } else if(target > nums[mid]) {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    return l;
}

int main(){
    vector<int> nums = {1,3,5,6};
    cout << searchInsert(nums, 7) << endl;
    return 0;
}