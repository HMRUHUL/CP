#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int LCS(const string& str1, const string& str2)
{
    int n = str1.length();
    int m = str2.length();

    // Initialize a 2D DP table
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
            cout<<"("<<str1[i-1]<<" "<<str2[j-1]<<")"<<"-->"<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][m];
}

int main()
{
    //freopen("output.txt", "w", stdout);
    string str1, str2;
    while( getline(cin, str1)&&getline(cin, str2))
    {

        int lcsLength;
        if(str1==""||str2=="") lcsLength = 0;
        else
            lcsLength = LCS(str1, str2);

        cout << lcsLength << endl;
    }
    return 0;
}
