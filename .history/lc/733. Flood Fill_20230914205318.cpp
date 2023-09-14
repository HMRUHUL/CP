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
int sr,sc,color;
        cin>>sr>>sc>>color;
Solution ob;
vector<vector<int>> ans=ob.floodFill(image,sr,sc,color);
for(int i=0;i<n;i++){   
    for(int j=0;j<m;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    }
    return 0;
}