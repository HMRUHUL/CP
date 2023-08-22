#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll; //4,5,6,7,0,1,2 // 3, 1, 2

int bin_s(vector<int>& v, int left, int right)
{

    if(v.size() == 1) return v[0];
    if(v.size() == 2) return min(v[0], v[1]);
    if(right-left == 1) return min(v[left], v[right]);
    cout<<left<<" "<<right<<endl;
    int mid = ((left+right)/2); // 3[7], 5[1],

    if(v[mid] > v[left] && v[mid] > v[right]) return bin_s(v, mid, right ); // 4,6
    else if(v[mid] < v[left] && v[mid] < v[right]) return bin_s(v, left, mid); //3, 5
    else if(v[mid]>v[left] && v[mid]<v[right]) return v[0];
    else return v[mid];

}

int findMin(vector<int>& nums)
{
    int n = nums.size();
    int left, right, mid;

    return bin_s(nums, 0, n-1);

}
int main()
{
    vector<int> nums= {4,6,10,-2,-1,0,1}; //
    cout<<findMin(nums);
}
