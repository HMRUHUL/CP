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
        priority_queue<int> pq;
        for(auto it : mp){
            pq.push(it.second);
        }   
        int ans = 0;
        while(!pq.empty()){
            int cnt = 0;
            vector<int> v;
            while(cnt < n + 1){
                if(pq.empty()) break;
                int x = pq.top();
                v.push_back(x);
                pq.pop();
                cnt++;
            }       
    }
};

int  main(){}