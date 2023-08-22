#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int a=1,i=0, num=0;
        while(n>0)
        {
            if(n&1)
            {
                i++;
                num|=(a<<i);
               // cout<<num<<endl;
            }
            n>>=1;
           cout<<n<<endl;
        }
        return i;
    }
};
int main()
{
    Solution solution;
    uint32_t a;
    while(cin>>a)
    {

        cout<<solution.hammingWeight(a);
    }

}

