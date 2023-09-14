#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len = tasks.size();
        if(len == 0) return 0;
        unordered_map<char,int> mp;
        for(auto c : tasks){
            mp[c]++;
        }
    }
};

int  main(){}