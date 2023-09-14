

#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>v(nums.size(),1);
        int left_pro = 1;
        int right_pro = 1;
        for(int i= 0;i<nums.size();++i){
            v[i]*=left_pro, left_pro*=nums[i];
        }
        for(int i = nums.size()-1; i>=0;--i){
            v[i]*=right_pro, right_pro*=nums[i];
        }
        return v;
    }
};

