
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    }
};

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    vector<int> ans = s.spiralOrder(matrix);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    for(int i=0; i<matrix.size(); i++){
    cout<<endl;
    return 0;
}