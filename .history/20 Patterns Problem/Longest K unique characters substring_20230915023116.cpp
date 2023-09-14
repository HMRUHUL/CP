

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int n = s.size();
        vector<int> dp(n, 1);
        int ans = 0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(s[i]==s[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int k;
        cin >> s >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
    return 0;
}