#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    int16_t t, a, r, d;
    string n;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sz = n.size();
        int i=sz-1;
        while(sz--)
        {
            v.pb(n[i--]-'0');
        }
       // for(int i=0;i<v.size();i++) cout<<v[i];

        int a=0, c=0;
        stack<int>st;
        for(i=0; i<v.size(); i++)
        {
            if(v[i]>=5)
            {
                if(c)
                {
                    a = c;
                    while(c--) st.pop();
                    while(a--) st.push(0);
                    c=0;
                    a=0;
                }
                if(i<v.size())
                {
                    if(i==v.size()-1)
                    {
                        st.push(0);
                        st.push(1);
                    }
                    else
                    {
                        st.push(0);
                        v[i+1]++;
                    }
                }


            }

            else
            {
                st.push(v[i]);
                c++;
            }

        }

        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
        v.clear();
    }
}
