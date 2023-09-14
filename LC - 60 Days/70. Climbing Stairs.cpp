#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

int solve(vector<int>& dp, int n){ 
    if(n<=3) return n;
    if(dp[n]!=-1) return dp[n]; 
    dp[n] = solve(dp, n-1)+solve(dp, n-2);
    return dp[n];
}
int climbStairs(int n) {
    vector<int>dp(n+1, -1);
    return solve(dp, n);
      
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        //taking input n
        cin>>n;
        Solution ob;
        cout<<ob.climbStairs(n)<<endl;
    }
    return 0;
}