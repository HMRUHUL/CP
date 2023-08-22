#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main()
{
    //freopen("Extrain.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;   //1 2 3 4 5 6 7 8 9 10 11 12 13
        ll sum = 0;
        ll maxx = 0;
        ll i = 1;
        ll k, curr_max, prev_max;
        curr_max = 1;
        prev_max = 0;
        ll add = 0;
        ll x,y;
        ll sq_sum=1;
        while(curr_max>prev_max&&sq_sum>0)
        {

            k = i;
            add = n-k-i-1;
            maxx = (add*(add+1)*(2*add+1))/6; // 10 385
            sq_sum=maxx;
            sum=sum+maxx;

            x=n-i-k;
            y=n-i+k;
            while(k--)
            {
                maxx = x*y;
                x++,y--;
                sum=sum+2*maxx;
            }
            prev_max=curr_max;
            if(prev_max<sum)curr_max=sum;
            i++;
            sum=0;
        }
        ll sum1;
        sum1 = curr_max;
        sum=0;
        i=1;
        curr_max=1;
        prev_max=0;
        sq_sum = 1;
        while(curr_max>prev_max&&sq_sum>0)
        {

            k = i;
            add = n-k-i;
            maxx = (add*(add+1)*(2*add+1))/6; // 10 385
            sq_sum=maxx;
            //cout<<"Square Sum: "<<add<<" "<<maxx<<endl;
            sum=sum+maxx;

            x=n-i-k+1;
            y=n-i+k;
            while(k--)
            {
                maxx = x*y;
               // cout<<"Dual End: "<<x<<"*"<<y<<" = "<<maxx<<endl;
                if(k>0)sum=sum+2*maxx;
                else sum=sum+maxx;
                x++,y--;
            }
            // cout<<i<<endl<<endl;
            prev_max=curr_max;
            if(prev_max<sum)curr_max=sum;
            i++;
            sum=0;
        }

        if(n==2) cout<<2<<endl;
        else if(n==3) cout<<7<<endl;
        else cout<<max(curr_max,sum1)<<endl;

    }

}
//main();
