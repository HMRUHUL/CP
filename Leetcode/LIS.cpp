#include <bits/stdc++.h>
using namespace std;

#define IN freopen("input.txt", "r", stdin);
#define OUT freopen("output.txt", "w", stdout);

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        int c = 0;
        for(int i = 1; i < nums.size(); i++){

            if(nums[i] > temp[temp.size() - 1]){
                temp.push_back(nums[i]);
                c++;
            } 
            else{
                int index = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
                temp[index] = nums[i];
            }
            // for(int j = 0; j < temp.size(); j++){    
        }
        return c+1;

    }
};

int main(){
    
    Solution solution;
    //OUT
    vector<int> nums= {10,9,2,5,3,7,101,18};
    cout<<solution.lengthOfLIS(nums);
}