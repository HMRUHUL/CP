#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.length();
        int flag=1;
        long long int ans=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i==n) return 0;
        if(s[i]=='-'){      
            flag=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            ans=ans*10+(s[i]-'0');
            if(ans*flag>INT_MAX) return INT_MAX;
            if(ans*flag<INT_MIN) return INT_MIN;
            i++;
        }
        return ans*flag;
        // return ans;
    }
};

int  main()
{
    
}