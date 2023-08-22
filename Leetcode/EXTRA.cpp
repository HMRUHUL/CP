

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll; //4,5,6,7,0,1,2 // 3, 1, 2
int minn(vector<int>& v, int left, int right)
{

    if(v.size() == 1) return 0;
    if(v.size() == 2)
    {
        int mi = min(v[0], v[1]);
        return mi==v[0]? 0:1;
    }
    if(right-left == 1)
    {
        int mi = min(v[left], v[right]);
        return mi==v[left]? left:right;
    }
    //cout<<left<<" "<<right<<endl;
    int mid = ((left+right)/2); // 3[7], 5[1],

    if(v[mid] > v[left] && v[mid] > v[right]) return minn(v, mid, right ); // 4,6
    else if(v[mid] < v[left] && v[mid] < v[right]) return minn(v, left, mid); //3, 5
    else if(v[mid]>v[left] && v[mid]<v[right]) return 0;
    else return mid;

}
int bin_s(vector<int>& v, int target, int left, int right)
{
    if(right>=left)
    {
        int mid = (left+right)/2; // 3[7], 5[1],

        cout<<left<<" "<<right<<" "<<v[mid]<<endl;
        if(v[mid]==target) return mid;
        else if(target>v[mid])
        {
            if(target>v[left]&&target>v[right]) return bin_s(v, target, left, mid);
            else if(target < v[right] && target <v[left]) return bin_s(v, target, mid, right);
            else return -1;
        }
        else if(target <v[mid])
        {
            if(target <v[left] && target <v[right]) return bin_s(v, target, mid, right);
            else if(target>v[right] && target >v[left]) return bin_s(v, target, left, mid);
            else return -1;
        }
    }
    else return -1;

}

int search(vector<int>& nums, int target)
{
    int n = nums.size(), l, h;
    int s = minn(nums, 0, nums.size()-1);
    if(!s) l=s, h=n-1;
    else l = s, h = s-1;
    if(nums[l]>target || nums[h]<target)
    {
        //cout<<nums[l]<<" "<<nums[h]<<endl;
        return -1;
    }
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
    vector<int> nums= {1,3,5};
    int target = 1;
    cout<<search(nums, target);
}
