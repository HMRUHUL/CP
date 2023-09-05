#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
vector<vector<int>> dfs(int index, int target, vector<int> arr, vector<int> v, vector<vector<int>> &ans){
        if(target == 0){
            ans.push_back(v);
            return ans;
        }
        if(index >= arr.size() || target < 0){
            return ans;
        }
        // take
        if(arr[index]<=target){
            v.push_back(arr[index]);
            dfs(index, target-arr[index], arr, v, ans);
            v.pop_back();
        }
      
        // not take
        dfs(index+1, target, arr, v, ans);
        return ans;
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        dfs(0, target, candidates, v, ans);
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<int> v = {1,2,3,6,7};
    int t = 7;
    vector<vector<int>> ans = s.combinationSum(v,t);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}