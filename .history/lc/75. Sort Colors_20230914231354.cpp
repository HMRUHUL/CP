#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        for (int i = 0; i <= high; i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[low]);
                low++;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[high]);
                high--;
                i--;
            }
        }
        return;
    }
};

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int>nums(n);
        for(int i = 0;i<n;i++){
            cin >> nums[i];
}
        Solution obj;
        obj.sortColors(nums);
for (int i = 0; i < nums.size(); i++) {
}