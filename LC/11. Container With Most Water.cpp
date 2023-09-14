#include<bits/stdc++.h>
using  namespace std;

class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int n=height.size();
        map<int,int>mp;
        vector<pair<int, int>> v;
        sort(v.begin(), v.end(), [](const auto &a, const auto &b)
        {
            return a.first < b.first;
        });
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

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> height(n);
        for(int i = 0; i < n; i++){
            cin >> height[i];
        }
        Solution obj;
        auto ans = obj.maxArea(height);
        cout << ans << "\n";
    }
    return 0;
}