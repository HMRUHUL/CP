#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
ll n = 1e5;
vector<bool> isPrime(n + 1, true);
void sieveOfEratosthenes()
{

    for (ll p = 2; p * p <= n; p++)
    {
        if (isPrime[p])
        {
            for (ll i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }
}

int main()
{
    ll n, t;
    cin >> t;
    sieveOfEratosthenes();
    while(t--)
    {
        cin>>n;
        vector<int> v;
        ll a, c=0;
        while(n--)
        {
            cin>>a;
            v.pb(a);
            if(a==1) c++;
            //if(isPrime[a]) cout<<a<<endl;
        }
        //cout<<c<<endl;
        ll ans=0;
        if(c>=2)
        {
            for(int i=0; i<v.size(); i++)
            {
               // cout<<v[i];
                if(v[i]==1) continue;
                if(isPrime[v[i]]) ans++;
               // cout<<isPrime[v[i]];
            }

        }
        if(!ans) cout<<"0"<<endl;
        else printf("%lld\n",(ans*c*(c-1))/2);
    }

}
