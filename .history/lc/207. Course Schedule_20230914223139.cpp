#include<bits/stdc++.h>
using  namespace std;



class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
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
    return 0;
}