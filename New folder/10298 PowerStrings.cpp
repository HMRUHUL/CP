#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    string st;
    while (cin >> st && st != ".")
    {
        if(st==".") break;

        int ma = st.size();
        string sub;
        int j = 1;
        int mi = 0;
        int c = 0, maxx = 0;
        int k = 0;
        for (int i = 0; j <= st.size();)
        {
            if (ma % j == 0)
            {
                int m;
                m = ma / j;
                string prev_sub = "";
                while (m > 0)
                {
                    sub = st.substr(i, j);
                    // cout<<sub<<" ";
                    if (sub == prev_sub || m == (ma / j))
                    {
                        prev_sub = sub;
                        c++;
                    }
                    else
                    {
                        c = 0;
                        break;
                    }
                    i += j;
                    m--;
                }
                if (c)
                {
                    mi = max(mi, c);
                    c = 0;
                    break;
                }
                else mi = max(mi, 1);
            }
            c = 0;
            j++;
            i = 0;
        }
        cout << mi ;
        
    }
}
