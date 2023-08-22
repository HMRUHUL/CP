#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int maxx = 0, i, j;
        int n = prices.size();
        vector<vector<int>> dp(n-1, vector<int>(n, 0));
        //prices = {7,1,5,3,6,4}
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                int profit;
                profit = prices[j] - prices[i];
                dp[i][j] = max(dp[i][j-1], profit);
            }
            if(i) dp[i][j-1] = max(dp[i][j-1], dp[i-1][j-1]);

            // cout<<dp[i][j-1]<<" ";

        }
        return dp[i-1][j-1];
    }
};
int main()
{
    Solution solution;
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> prices = {7,1,5,3,6,4};
    cout<<solution.maxProfit(prices)<<endl;

}

