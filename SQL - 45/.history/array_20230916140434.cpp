#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,12,13,14,15};
    int index = 3, value = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = arr[inedex];
    arr[index] = value;
    for(int i = index+1; i <= n ;){
         arr[index+1] = t;
    }
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
}