
#include<bits/stdc++.h>
using  namespace std;



class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m = amount;
        vector<int> dp(m+1, m+1);
        dp[0]= 0;
        for(int i =1; i<=m;i++){
            for(int j = 0; j<coins.size(); j++){
                if(i>=coins[j])
                dp[i] = min(dp[i], 1+dp[i-coins[j]]);
            }
        }
        return dp[m]>m?-1:dp[m];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        //taking total number of elements
        int n;
        cin>>n;
        vector<int> coins(n);
        for(int i=0;i<n;i++){
            cin>>coins[i];  
        }
}