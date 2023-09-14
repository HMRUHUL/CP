#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if (n < m) return "";
        
        unordered_map<char, int> tmap;
        for (auto c : t) tmap[c]++;
        
        unordered_map<char, int> smap;
        int left = 0, right = 0, count = 0, min_len = INT_MAX, start = 0;
        while (right < n) {
            smap[s[right]]++;
            if (smap[s[right]] <= tmap[s[right]]) count++;
            while (count == m) {
    }
};

int main(){}