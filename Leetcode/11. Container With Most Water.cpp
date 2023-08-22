#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int n=height.size();
        map<int,int>mp;
        vector<pair<int, int>> v;
        //for(int i=0; i<n; i++) v.push_back(make_pair( height[i],i)), cout<<height[i]<< " ";

        sort(v.begin(), v.end(), [](const auto &a, const auto &b)
        {
            return a.first < b.first;
        });
        // cout<<endl;
        // sort(height.begin(),height.end());


//        for(int i = 0; i<n; i++)
//        {
//
//            cout<<height[i]<<" ";
//        }
        //cout<<endl;
        // for(const auto it: v) cout<<it.first<<" "<<it.second<<endl;
        int maxx = 0, mi;
        int i = 0;
        int l = i, r = n-1;
        while(l<r)
        {
            if(height[l]>height[r]){
                mi=height[r];
                maxx=max(maxx, mi*(r-l));
                r--;
            }
            else  {
                mi=height[l];
                maxx=max(maxx, mi*(r-l));
                l++;
            }




        }

return maxx;


    }
};

int main()
{
    Solution solution;
    vector<int> v= {1,8,6,2,5,4,8,3,7};
   cout<< solution.maxArea(v);
}
