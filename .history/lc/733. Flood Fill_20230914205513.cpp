#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        if(image[sr][sc]==color) return image;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(r-1>=0 and image[r-1][c]==image[sr][sc]){
                image[r-1][c]=color;
                q.push({r-1,c});
            }
            if(r+1<n and image[r+1][c]==image[sr][sc]){
                image[r+1][c]=color;
                q.push({r+1,c});
            }
            if(c-1>=0 and image[r][c-1]==image[sr][sc]){
                image[r][c-1]=color;
                q.push({r,c-1});
            }
            if(c+1<m and image[r][c+1]==image[sr][sc]){
                image[r][c+1]=color;
                q.push({r,c+1});
            }
        }
        return image;

    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> image(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>image[i][j];
            }
            
}