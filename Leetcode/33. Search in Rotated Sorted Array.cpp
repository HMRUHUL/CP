
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll; //4,5,6,7,0,1,2 // 3, 1, 2 // 1,3 ,5

int bin_s(vector<int>& v, int target, int left, int right)
{
    int mid = (left+right)/2;
    cout<<left<<" "<<right<<" "<<v[mid]<<endl;
    if(target==v[right]) return right;
    if(target==v[left]) return left;
    if(v[mid]==target) return mid;
    else if(right-left<=1)
    {
        if(target ==v[right]) return right;
        else if(target == v[left]) return left;
        else return -1;
    }
    else if(target>v[mid])
    {
        if(v[mid]>v[left]&&v[mid]>v[right])
        {
            if(target>v[left]) return bin_s(v, target, mid+1, right);
            else return bin_s(v, target, left, mid-1);
        }
        else if(v[mid] < v[right] && v[mid] <v[left])
            if(target<v[right]) return bin_s(v, target, mid+1, right);
            else if(target>v[left]) return bin_s(v, target, left, mid-1);
            else return -1;
        else if(v[mid]<v[right] && v[mid]>v[left]) return bin_s(v, target, mid+1, right);
        else return -1;
    }
    else if(target <v[mid])
    {
        if(v[mid] >v[left] && v[mid] >v[right] )
        {
            if(target<v[right]) return bin_s(v, target, mid+1, right);
            else return bin_s(v, target, left, mid-1);
        }
        else if(v[mid]<v[right] && v[mid] <v[left] || v[mid]<v[right]) return bin_s(v, target, left, mid-1);

        else return -1;
    }
    else return -1;
}

int search(vector<int>& nums, int target)
{
    int n = nums.size();
    int left, right, mid;
    if(n==1)
    {
        if(target==nums[0]) return 0;
        else return -1;
    }
    else if(n==2)
    {
        if(target==nums[0]) return 0;
        else if(target == nums[1]) return 1;
        else return -1;
    }
    else
        return bin_s(nums, target, 0, n-1);

}
int main()
{
    vector<int> nums= {1,2,3,4,5,6};
    int target = 4;
    cout<<search(nums, target);
}
