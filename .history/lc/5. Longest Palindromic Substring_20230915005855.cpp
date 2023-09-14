#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int expandAroundCenter(string s, int left, int right){
    string longestPalindrome(string s) {
        int n = s.size();
        if(n<=1) return s;
        int start = 0, end = 0;
        for(int i=0;i<n;i++){
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i+1);
            int len = max(len1, len2);
            if(len > end-start){
                start = i - (len-1)/2;
                end = i + len/2;
            }
        }
        return s.substr(start, end-start+1);
    }
};

int  main(){}