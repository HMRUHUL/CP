#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int main()
{
    //freopen("Extrain.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a>b) cout<<"First"<<endl;
        else if(b>a) cout<<"Second"<<endl;
        else {
            if(c&1) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}
