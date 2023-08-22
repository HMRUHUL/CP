#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
vector<vector<int>>v;
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
            int sum, n1, n2, n3;
            int l = i+1, r = n-1;
            if(i>0&&nums[i]==nums[i-1]) continue;
            while(l<r)
            {
                sum = nums[i]+nums[l]+nums[r];

                if(sum>0) r-=1;
                else if(sum<0) l+=1;
                else
                {
                    cout<<nums[i]<<" "<<nums[l]<<" "<<nums[r]<<endl;
                    v.push_back({nums[i],nums[l],nums[r]} );
                    n1=nums[i], n2=nums[l], n3=nums[r];
                    l+=1;
                    while(nums[l]==nums[l-1] &&l<r) l+=1;
                }
            }
        }
        return v;
    }
};
int main()
{
    Solution solution;
    vector<int> nums= {4,-2,-2,-2,0,1,1,2,4}; //
    solution.threeSum(nums);
    /*   for(int i = 0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].size(); i++)
                cout<<v[i][j]<< " ";
            cout<<endl;
        }
    */

}
