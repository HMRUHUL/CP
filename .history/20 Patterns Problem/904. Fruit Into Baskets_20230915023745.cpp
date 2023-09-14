

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    int n = fruits.size();
    if(n <= 2) return n;
    int ans = 2;
    int i = 0, j = 0;
    unordered_map<int, int> mp;
    while(j < n){
    mp[fruits[j]]++;
    while(mp.size() > 2){
        mp[fruits[i]]--;
        if(mp[fruits[i]] == 0) mp.erase(fruits[i]);
    }
    j++;
    
};

int main(){}