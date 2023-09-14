#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> ans;
        if(n < m) return ans;
        vector<int> p_count(26, 0), s_count(26, 0);
        for(int i = 0; i < m; i++){
            p_count[p[i] - 'a']++;
            s_count[s[i] - 'a']++;
    }
};

int main(){}