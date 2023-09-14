#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[l]){
                if(target >= nums[l] && target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else{
                if(target <= nums[r] && target > nums[mid])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return -1;
    }
};

int  main(){
    Solution s;
    vector<int> v = {1,3,5,6};
    cout<<s.search(v, 5)<<endl;
    cout<<s.search(v, 2)<<endl;
}