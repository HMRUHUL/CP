#include<bits/stdc++.h>
using namespace std;

int twoSum(int nums[], int target)
{


    int tr = target;
    int k= 0, i, j;
    vector<int>v;
    int s = nums.size();
    for(i=0; i<s; i++)
    {
        for(j=i+1; j<s; j++)
        {
            if(nums[i]+nums[j]==tr)
            {
                v.push_back(i);
                v.push_back(j);
                k=1;
                break;
            }
            else v.clear();
        }
        if(k)
        {
            return v;
            break;
        }

    }
}

int main()
{
    int arr[5]= {1,2,3,4,5}, tr = 7;
    cout<<twoSum(arr, tr);
}
