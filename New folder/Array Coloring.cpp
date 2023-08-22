#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, c=0, a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>a;
        if(a&1) c++;
        }
        cout<<(c&1?"No":"YES");
        c=0;

    }
}
