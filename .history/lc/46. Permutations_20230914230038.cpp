#include<bits/stdc++.h>
using  namespace std;
void permuteHelper(vector<int> &nums, vector<int> &permutation, vector<vector<int>> &result, int n){
    if(permutation.size() == n){
        result.push_back(permutation);
        return;
    }
    for(int i = 0; i < n; i++){
        if(find(permutation.begin(), permutation.end(), nums[i]) != permutation.end()){
            continue;
        }
        permutation.push_back(nums[i]);
        permuteHelper(nums, permutation, result, n);
        permutation.pop_back();
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> permutation;
        int n = nums.size();
        if(n == 0){
            return result;
        }
        permuteHelper(nums, permutation, result, n);
        return result;
    } 
};

int main(){
// 1. Input
	vector<int> nums = {1,2,3};
	Solution s;
	vector<vector<int>> result = s.permute(nums);
	for(int i = 0; i < result.size(); i++){
		for(int j = 0; j < result[i].size(); j++){
			cout << result[i][j] << " ";
		}
}