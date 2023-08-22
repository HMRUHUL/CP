#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
class Solution
{
public:
    int getSum(int a, int b)
    {
        int c;
        while(b!=0){
            c=a&b, a=a^b, b=c<<1;
        }
        return a;
    }
};
int main()
{
    Solution solution;
    int a, b;
    while(cin>>a>>b)
    {
        cout<<(a>>1);
        cout<<solution.getSum(a,b);
    }

}
