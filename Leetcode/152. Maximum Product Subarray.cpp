#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int maxProduct(vector<int>& nums)
{
    int f_max = 1;
    int t_max = 1;
    int n_max = 1;
    int c = 0, maxx=0, maxxx=0;
    if(nums.size()==1) return nums[0];
    for(int i = 0; i<nums.size(); i++) //1,-2,0,1,-4,1,1,5,4,-1,6,4,1,-5,0,-1,-5,1,-6,-4
    {

        if(!nums[i])  c=0, f_max=1, t_max=1,maxx=0, n_max=1, maxxx=max(maxxx, 0);
        else
        {
            t_max *=nums[i];
            if(maxx<t_max) maxx = t_max;
            else
            {
                if(!c) f_max = t_max, c = 1;
                else n_max = t_max;

            }
           maxx = max(maxx, (n_max/f_max));
        }
        maxxx = max(maxxx, maxx);
    }
    return maxxx;
}
int main()
{
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    int a, b;
   // while(cin>>a)
    {
        //if(a==0) break;
        vector<int> nums={-2,0,-1};
        //cin>>a>>b;
        //while(a--) cin>>b, nums.pb(b);;
       cout<< maxProduct(nums);
    }


}

