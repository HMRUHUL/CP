#include<bits/stdc++.h>
using  namespace std;


class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,string> parent;
        unordered_map<string,string> name;
        unordered_map<string,vector<string>> email;
        int i=0;
        for(auto account:accounts){
            string name1="";
            for(int j=1;j<account.size();j++){
                if(j==1){
                    name1=account[j];
                    parent[name1]=name1;
                    name[name1]=name1;
                    continue;
                }
                string parent1=find(account[j],parent);
                parent[account[j]]=parent1;
                name[account[j]]=name[parent1];
            }
    }
};

int  main(){}