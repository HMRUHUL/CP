
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
    }
};

int main(){}