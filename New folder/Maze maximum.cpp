#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    ll m, n, x;
    cin>>m>>n;;
    vector<ll>v[m*n];
    vector<ll>row;
    ll a;
    ll mi_row;
    for(ll i=0; i<m; i++)
    {
        mi_row=INT_MAX;
        for(ll j=0; j<n; j++)
        {
            cin>>a;
            v[i].pb(a);
            mi_row = min(mi_row,a);

        }
        //cout<<"row min "<<mi_row<<endl;
        row.pb(mi_row);
    }
    ll mi_col = INT_MAX;
    ll ans = 0;
    //cout<<endl;
    ll i, j;
    if(m==1)
    {
        cout<<mi_row<<endl;
        return 0;
    }
    for( i=0; i<n; i++)
    {
        for( j=0; j<m; j++)
        {
            mi_col = min(v[j][i], mi_col);
            // cout<<v[j][i]<< " ";
            if(v[j][i]==mi_col)
            {
                if(v[j][i]==row[j])
                {
                    ans =
                }
            }
            if(v[j][i]==row[j])
            {
                if(v[j][i]==mi_col)
                {

                }

            }
            else continue;
            ans =  min(v[j][i], row[j]);
            ans=max(ans, mi_col);
        }

        if(n==1)
        {
            cout<<mi_col<<endl;
            return 0;
        }
        // cout<<endl;


        //cout<<"col min "<<mi_col<<endl;
        //ans=max(ans,mi_col );
        mi_col = INT_MAX;
    }
    cout<<ans <<endl;
    main();
}
