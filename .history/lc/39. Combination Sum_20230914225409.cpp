#include<bits/stdc++.h>
using  namespace std;


class Solution {

    vector<vector<int>>dfs(int index, int target, vector<int>&arr, vector<int>v, vector<vector<int>>&vv){
        if(arr.size()==index){
            if(target==0){
            vv.push_back(v);
            } 
            return vv;
        }
        if(target>=arr[index]){
            v.push_back(arr[index]);
            dfs(index, target - arr[index], arr, v,vv);
            v.pop_back();
        }
        dfs(index+1, target, arr, v, vv);
        return vv;
    }
    
public:
        
   vector<vector<int>> combinationSum(vector<int>&candidates, int target ){
        vector<int>v;
        vector<vector<int>>vv;
        int index = 0;
        dfs(index, target, candidates, v, vv);
        for(auto i:vv){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        return vv;
    }

    
};


int  main(){
    
}