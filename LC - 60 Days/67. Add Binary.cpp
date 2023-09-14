#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry = 0;
        int i = a.size()-1,j = b.size()-1;
        while(i>=0 || j>=0 || carry){
            int sum = carry;
            sum += i>=0?a[i--]-'0':0;
            sum += j>=0?b[j--]-'0':0;
            res.push_back(sum%2+'0');
            carry = sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
int main(){
    Solution sol;
     string a = "11";
     string b = "1";
     string res = sol.addBinary(a,b);
    return 0;
}