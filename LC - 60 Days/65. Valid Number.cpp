#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    bool isNumber(string s) {
        regex pattern("^[+-]?(\\d+\\.?|\\.\\d+|\\d+\\.\\d+)([eE][+-]?\\d+)?$");
        return regex_match(s, pattern);
    }
};

int main(){
    Solution sol;
    cout<<sol.isNumber("0")<<endl;
    cout<<sol.isNumber("0.1")<<endl;
    cout<<sol.isNumber("-0.1")<<endl;
    cout<<sol.isNumber("1.0")<<endl;
    cout<<sol.isNumber("1e5")<<endl;
    cout<<sol.isNumber("1e-5")<<endl;
    cout<<sol.isNumber("1.2.3")<<endl;
}