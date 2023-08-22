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
        //prices = {7,1,5,3,6,4}
        int curr_min = INT_MAX, curr_max = 0;
        for(i=0; i<n; i++)
        {
            curr_min = min(curr_min, prices[i]);
            curr_max = max(curr_max, prices[i]);
            maxx=max(maxx, curr_max-curr_min);
        }
        return maxx;
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

