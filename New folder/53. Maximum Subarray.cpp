#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int maxSubArray(vector<int>& nums)
{
    int maxx = nums[0];
    int sum  = nums[0];
    for(int i = 1; i<nums.size(); i++)
    {
        sum+=nums[i];
        if(sum>maxx)
        {
            maxx=sum;
        }
        else
        {
            maxx=max(maxx,nums[i]);
        }
        if(sum<=nums[i])sum = nums[i],maxx=nums[i];

        cout<<maxx<<endl;

    }
    return maxx;
}
int main()
{
//    freopen("Extrain.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
    vector<int> nums= {-1,0};
    cout<<maxSubArray(nums)<<endl;

}
