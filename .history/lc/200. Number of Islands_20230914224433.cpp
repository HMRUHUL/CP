

#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }   
            }
        }
        
        return count;
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