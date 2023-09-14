#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1) {
            if(nums[0]!=target) return -1;
            else return 0;
        } 
        int a = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return nums[a]==target?a:-1;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,target;
        cin>>n>>target;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        Solution ob;
        cout<<ob.search(nums,target)<<endl;
    }
    return 0;
}