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
            else if(s[i]==')')
            {
                int val = st.top();
                st.pop();
                val = val*2;
                st.push(val);
                i++;
            }
            else{
                int num = 0;
                while(i<n && s[i]>='0' && s[i]<='9'){
                    num = num*10 + (s[i]-'0');
                    i++;
                }
                st.push(num);
            }
        }
        // return the top element
        return st.top();
        
    }
};

int main(){}