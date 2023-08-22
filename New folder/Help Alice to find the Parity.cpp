#include<bits/stdc++.h>
using namespace std;

int main(){
    int L, R, X;
    cin>>L>>R;
    for(int i = L; i<=R;i++) X^=i;
    cout<<((X)&1?"odd":"even");
}
