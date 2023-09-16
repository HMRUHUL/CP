#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,12,13,14,15};
    int index = 3, value = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = arr[index];
    arr[index] = value;
    for(int i = index; i <= n+1 ;i++){
         arr[i] = t;
         t = arr[i];
    }
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
}