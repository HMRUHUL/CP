#include <bits/stdc++.h>
using  namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int rem;
        map<int, int>mp;
        vector<int>v;
        for(int i = 0; i<nums.size(); i++)
        {
            mp[nums[i]] = i;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            rem = target-nums[i];
            if(mp[rem] && mp[rem] !=i)
            {
                //cout<<i<<" "<<mp[rem]<<endl;
                v.push_back(i);
                v.push_back(mp[rem]);
                break;
            }

        }
        return v;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
int target;
        cin>>target;
Solution ob;
vector<int>ans=ob.twoSum(nums,target);
        for(int i=0;i<ans.size();i++){
}