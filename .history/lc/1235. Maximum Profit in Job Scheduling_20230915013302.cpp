#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> jobs(n, vector<int>(3));
        for(int i = 0; i < n; i++){
            jobs[i] = {startTime[i], endTime[i], profit[i]};
        }
        sort(jobs.begin(), jobs.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        vector<int> dp(n, 0);
        
    }
};

int main(){}