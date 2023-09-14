#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i]==' ') i++;
            else if(s[i]=='('){
                st.push(0);
                i++;
            }
            
    }
};

int main(){}