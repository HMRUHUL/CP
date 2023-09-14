#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        int max_len=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j] && (j-i<=2 || dp[i+1][j-1])){
                    dp[i][j]=1;
                    max_len=max(max_len,j-i+1);
                }
            }
        }
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.longestPalindrome(s)<<endl;
    }
    return 0;
}