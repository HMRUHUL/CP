#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> um = {{'(', ')'},{'{', '}'}, {'[' , ']'}};
        stack <char> st;
        for (char c:s){
            if(c == '(' || c =='{' || c == '[') st.push(c);
            else{
                if(c == ')' || c == '}' || c == ']'){
                    if(st.empty() || c != um[st.top()]) return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main(){
    Solution s;
    cout<<s.isValid("()[]{}")<<endl;
    cout<<s.isValid("()[{}]"
}