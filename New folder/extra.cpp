#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    // freopen("output.txt", "w", stdout);
    int t;
    string st;
    cin>>t;
    while(t--)
    {

        cin>>st;
        int ma=st.size();
        set<char>sett;
        for(int i=0; i<ma; i++) sett.insert(st[i]);
        string sub;
        int j=1;
        int mi = 0;
        int c=0, maxx=0;
        int k=0;
        if(sett.size()==1) cout<<1<<endl;
        else
        {
            for(int i=0; j<st.size(); )
            {
                if(ma%j==0)
                {
                    int m;
                    m = ma/j;
                    string prev_sub = "";
                    while(m>0)
                    {
                        sub = st.substr(i,j);
                        //cout<<sub<<" ";
                        if(sub==prev_sub||m==(ma/j))
                        {
                            prev_sub = sub;
                            c=1;
                        }
                        else
                        {
                            c=0;
                            break;
                        }
                        i+=j;
                        m--;
                    }


                }
                if(c)
                {
                    cout<<j<<endl;
                    k=1;
                    i=0;
                    break;
                }
                j++;
                i=0;
            }
            if(!k) cout<<ma<<endl;

        }
        if(t) cout<<endl;

    }


}
