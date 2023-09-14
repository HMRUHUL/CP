
#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.size()==0) return ans;
        int l=0,r=matrix[0].size()-1,t=0,b=matrix.size()-1;
        while(true){
            //left to right
            for(int i=l;i<=r;i++) ans.push_back(matrix[t][i]);
            if(++t>b) break;
            //top to bottom
            for(int i=t;i<=b;i++) ans.push_back(matrix[i][r]);
            if(--r<l) break;
            //right to left
            for(int i=r;i>=l;i--) ans.push_back(matrix[b][i]);
            if(--b<t) break;
            //bottom to top
            for(int i=b;i>=t;i--) ans.push_back(matrix[i][l]);
            if(++l>r) break;
        }
        return ans;

    }
};

int main(){
    Solution sol;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=sol.spiralOrder(matrix);
    for(auto i:ans) cout<<i<<" ";
    return 0;
}