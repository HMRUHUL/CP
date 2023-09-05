#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int b[n];
        vector<int>v;
        for(int i=0; i <n; i++)
        {
            cin>>b[i];
        }
        v.push_back(b[0]);
        for(int i = 1; i<n-1; i++)
        {
            if(b[i]<=b[i+1])
                v.push_back(b[i]);
            v.push_back(b[i]);

        }
    }
    cout<<v.size()<<endl;

    for(int i = 0; i<2*n && i<v.size(); i++) cout<<v[i]<< " ";
    cout<<endl;
}
}
