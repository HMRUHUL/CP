#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    // For getting input from input.txt file
    //freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    //freopen("output.txt", "w", stdout);
    string st, rev_st;
    ll a, b, t, n;
    while(cin>>st)
    {
        //cin>>st;
        rev_st = st;
        reverse(rev_st.begin(), rev_st.end());

       // cout<<rev_st<<endl;
        ll s = st.size();
        ll i=0, j;
        if(st==rev_st) cout<<st<<endl;
        else
        {
            for(j = 0; j < s; j++)
            {

                if(st[j]==rev_st[i]) i++;
                else
                {
                    j-=i;
                    // cout<<st[j]<<" "<<rev_st[i]<<" ";
                    i=0;
                }
                //cout<<endl;

            }
            if(j==s)
            {
                //cout<<i<<endl;
                while(i<s)
                {
                    st+=rev_st[i];
                    i++;
                }

            }
            cout<<st<<endl;
        }

    }

}
