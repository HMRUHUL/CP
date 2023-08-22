
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
#define IN freopen("input.txt", "r", stdin);
#define OUT freopen("output.txt", "w", stdout);
class Solution
{
public:
    int lengthOfLIS(vector<int>& nums)
    {
        int ans = 1, n = nums.size();
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < i; j++)
                if(nums[i] > nums[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                    ans = max(ans, dp[i]);
        
                }
        return ans;
    }
};

int main()
{
    Solution solution;
    //OUT
    vector<int> nums= {1,2,3,4,5,6};
    cout<<solution.lengthOfLIS(nums);
} 
