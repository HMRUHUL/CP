#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main()
{
//    freopen("Extrain.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, c=0, n;
        cin>>n;
        vector<ll>v;
        ll d;
        cout<<1<<" ";
        ll cnt = 1;
        bool b[n];
        fill(b,b+n+1, 1);
        for(ll i=2; i<=n; i++)
        {
            if(i*2<=n&&b[i]) cout<<i<< " "<<i*2<< " ", b[i]=0, b[i*2]=0;
            else
            {
                if(b[i])cout<< i<< " ", b[i]=0;
            }
        }
        cout<<endl;

    }
}

