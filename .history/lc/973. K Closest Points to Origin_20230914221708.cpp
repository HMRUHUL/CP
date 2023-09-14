#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        int n = points.size();
        for(int i = 0; i < n; i++){
            int x = points[i][0], y = points[i][1];
            points[i].push_back(x*x + y*y);
        }
        sort(points.begin(), points.end(), [](vector<int> &a, vector<int> &b){
            return a[3] < b[3];
        });
        for(int i = 0; i < k; i++){
            ans.push_back(points[i]);
        }
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> points(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>points[i][j];
            }   
}
        Solution ob;
        vector<vector<int>> result = ob.kClosest(points, k);
        for (int i = 0; i < result.size(); i++) { 
            for (int j = 0; j < result[i].size(); j++) { 
                cout << result[i][j] << " "; 
            }
            cout<<endl; 
        }
    }
return 0;
}