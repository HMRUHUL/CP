#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,12,13,14,15};
    int index = 3, value = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = arr[inedex]
    for(int i = index; i <= n ;){
        if(i >= 3) int t = arr[i], arr[i] = value, arr[i+1] = t, i++;
        else i++;
    }
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
}