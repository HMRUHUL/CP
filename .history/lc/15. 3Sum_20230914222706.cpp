#include<bits/stdc++.h>
using  namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>v;
        int k=0;
        for(int i=0; i<n; i++)  // -4,-1,-1,0,1,2
        {
            int sum;
            int l = i+1, r = n-1;
            if(i>0&&nums[i]==nums[i-1]) continue;
            else
            while(l<r)
            {
                sum = nums[i]+nums[l]+nums[r];
                if(sum>0) r-=1;
                else if(sum<0) l+=1;
                else
                {
                    v.push_back({nums[i],nums[l],nums[r]} );
                    l+=1;
                    while(nums[l]==nums[l-1] &&l<r) l+=1;
                }
            }
        }
        return v;
    }
};
int main(){
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        vector<vector<int>>ans = obj.threeSum(nums);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }   
        }
}