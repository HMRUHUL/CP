#include<bits/stdc++.h>
using  namespace std;
void permuteHelper(vector<int> &nums, vector<int> &permutation, vector<vector<int>> &result

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
}