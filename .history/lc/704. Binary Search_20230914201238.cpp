#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a = binary_search(nums,target,0,nums.size()-1);
        retu
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