#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
int main()
{

    freopen("Extrain.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        ll a;
        ll mi = INT_MAX, ma = 0;
        ll m = (n*(n-1))/2;
        for(ll i = 0; i< m ; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(), v.end());

        for(ll i=0; i<m; i+=--n)
        {
            cout<<v[i]<<" ";
        }
      cout<<1000000000<<endl;
    }

}
