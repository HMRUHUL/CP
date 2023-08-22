#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector <int> v;

        int a=1,i=0, num=0;
        for(i=0; i<=n; i++)
        {
            int k=0;
            num = i;
            //if(!num)v.push_back(k);
            while(num>0)
            {
                if(num&1)
                {
                    k++;
                }
                num>>=1;

            }
            v.push_back(k);

        }
        return v;
    }
};

int main()
{
    Solution solution;
    int n;
    while(cin>>n)
    {

        cout<<solution.countBits(n);
    }

}


