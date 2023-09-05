#include "cpp.h"

class Solution
{
public:
    int numDecodings(string s)
    {
        int ans = 0;
        int k = 0, c=0, one=0;
        int n = s.size();
        int prev = 2, prevv=1, curr;
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i]=='0')
            {
                if(i==0||(i>0&&s[i]==s[i-1])||(i>=0 && s[i-1]>'2')) return 0;
            }


            if(s[i]>'2'||s[i]=='0')
            {
                if(i>0)
                {
                    if(s[i-1]<'2' || s[i]<='6')
                    {
                        k = 1;
                        c = 0;
                    }
                    else k=1, c=0, i--, ans = (ans==0? 1 : ans);
                }
                if(s[i]>'2')  ans = (ans==0? 1:ans);
                if(i>0&&s[i]=='0') i--, c=1, ans = (ans==0? 1 : ans);

            }
            else
            {
                if(i==n-1) ans = 1, k = 1;
                else if(c)
                {
                    c=0;
                    continue;
                }
                else if(k)
                {
                    prevv=ans;
                    ans *= 2, k = 0, c=0;
                    prev = ans;

                }
                else
                {

                    if(ans>1)curr = prev+prevv;
                    else curr = 1 + prevv;
                    prevv = prev;
                    prev = curr;
                    ans = curr;
                    k=0, c=0;
                };

                cout<<ans<<endl;

            }
        }
        return ans;
    }

};
int main()
{
    IN
    OUT
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.numDecodings(s)<<endl;
    }
    return 0;
}
