#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int maxSubArray(vector<int>& nums)
{
    int maxx = nums[0];
    int sum  = nums[0];
    int maxxx = 0;
    for(int i = 1; i<nums.size(); i++)
    {
        sum+=nums[i];
        if(sum>maxx)
        {
            if(sum<nums[i])
                sum=nums[i], maxx=nums[i];
            else
                maxx=sum;
        }
        else if(sum<nums[i])
        {
            if(sum-nums[i]<nums[i])
                sum = nums[i],maxx=nums[i];
            else sum-=nums[i], maxx = sum;
        }
        else
        {
            maxx=max(maxx,nums[i]);
        }
         cout<<maxx<<endl;
        maxxx = max(maxxx, maxx);
    }
    return maxxx;
}
int main()
{
   //freopen("Extrain.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b;
    while(cin>>a)
    {
        //if(a==0) break;
        vector<int> nums;
        //cin>>a>>b;
        while(a--) cin>>b, nums.pb(b);;
        cout<<maxSubArray(nums)<<endl;
    }


}
