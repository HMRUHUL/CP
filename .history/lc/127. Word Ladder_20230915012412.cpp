#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (dict.find(endWord) == dict.end()) return 0;
        unordered_set<string> visited;
        queue<string> q;
        q.push(beginWord);
        int level = 1;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                string cur = q.front();
                q.pop();
                if (cur == endWord) return level;
                for (int i = 0; i < cur.size(); i++) {
                    string next = cur;
                    for (char c = 'a'; c <= 'z'; c++) {
                        next[i] = c;
                        if (dict.find(next) != dict.end() && visited.find(next) == visited.end()) {
                            q.push(next);
                            visited.insert(next);
                        }
                    }
                }
             }
         level++;
        }
      return 0;
    }
};

