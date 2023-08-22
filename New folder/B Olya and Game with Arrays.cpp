#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll t, n, m, a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //vector<vector<int>> v(n);

        ll max_sum;
        ll curr_min,mi, all_min, prev_min, max_n=0;
        all_min=INT_MAX, mi=INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin>>m;

            curr_min=INT_MAX ;

            for (ll j = 0; j < m; j++)
            {
                cin>>a;
                if(curr_min > a)
                {
                    prev_min = curr_min;
                    curr_min = a;
                }
                else
                {
                    if(prev_min>a)
                    {
                        prev_min = a;
                    }
                }
            }
            max_n += prev_min;
            mi = min(prev_min, mi);
            all_min = min(all_min, curr_min);
            //cout<<endl<<curr_min<<" "<<prev_min<<" "<<max_n<<" "<<all_min<<endl;

        }
        max_sum = max_n + all_min - mi;
        cout<<max_sum<<endl;
    }
}
