#include<bits/stdc++.h>
using  namespace std;



class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>vis(numCourses,0);
        vector<int>indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            indegree[prerequisites[i][0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(int i=0;i<prerequisites.size();i++){
                if(prerequisites[i][1]==cur){
                    indegree[prerequisites[i][0]]--;
                    if(indegree[prerequisites[i][0]]==0){
                        q.push(prerequisites[i][0]);
                    }
                }
            }
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }
// for(int i=0;i<n;i++){
    return 0;
}