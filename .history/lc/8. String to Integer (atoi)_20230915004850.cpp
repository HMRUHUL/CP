#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:

int toi(string str) {
    long long  result = 0;
    long long sign = 1;
    size_t i = 0;

  
    if (i < str.length() && (str[i] == '+' || str[i] == '-')) {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }
    while (i < str.length() && isdigit(str[i])) {
                result = result * 10 + (str[i] - '0');
                if(result*sign>INT_MAX) return INT_MAX;
                if(result*sign<INT_MIN) return INT_MIN;
        i++;
    }
    return (int)result*sign;
}
    int myAtoi(string s) {
        regex pattern("^[ ]*([+\\-]?0*([1-9][0-9]*))");
        string result = regex_replace(s, pattern, "$1");
       // cout<<result<<endl;
        int extractedInt = toi(result);
        return  extractedInt;
    }
    
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
    Solution s;
    cout<<s.myAtoi("-2147483648")<<endl;
    cout<<s.myAtoi("2147483647")<<endl;
    cout<<s.myAtoi("2147483648")<<endl;
    cout<<s.myAtoi("-2147483649")<<endl;
    cout<<s.myAtoi("2147483649")<<endl;
    cout<<s.myAtoi("-2147483649")<<endl;
    cout<<s.myAtoi("2147483649")<<endl;
    cout<<s.myAtoi("-2147483647")<<endl;
    cout<<s.myAtoi("2147483647")<<endl;
}