#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int rem;
        map<int, int>mp;
        vector<int>v;
        for(int i = 0; i<nums.size(); i++)
        {
            mp[nums[i]] = i;
            //cout<<nums[i]<<endl;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            rem = target-nums[i];

            if(mp[rem] && rem != nums[i])
            {
                //cout<<i<<" "<<mp[rem]<<endl;
                v.push_back(i);
                v.push_back(mp[rem]);
                break;
            }

        }
        cout<<endl;
        return v;

    }
};

int main()
{
    Solution solution;
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> nums = {1,3, 2, 4};
    int target = 6;
    vector<int> result = solution.twoSum(nums, target);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
}
