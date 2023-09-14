

#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

    }
};


int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>> grid(n,vector<char>(m,'0'));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    
    Solution s;
    
    cout<<s.numIslands(grid)<<endl;
    return 0;
}