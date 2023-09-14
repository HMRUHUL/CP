#include <bits/stdc++.h>
using  namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int rem;
        map<int, int>mp;
        vector<int>v;
        for(int i = 0; i<nums.size(); i++)
        {
            mp[nums[i]] = i;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            rem = target-nums[i];
            if(mp[rem] && mp[rem] !=i)
            {
                //cout<<i<<" "<<mp[rem]<<endl;
                v.push_back(i);
                v.push_back(mp[rem]);
                break;
            }

        }
        return v;
    }
};