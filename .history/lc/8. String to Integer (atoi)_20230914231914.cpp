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
    }
};

int  main(){}