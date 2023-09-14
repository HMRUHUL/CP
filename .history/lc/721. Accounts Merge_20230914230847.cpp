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
            for(int j=1;j<account.size();j++){
                if(j==1)continue;
                string parent1=find(account[j],parent);
                email[parent1].push_back(account[j]);
            }
        }
        vector<vector<string>> ans;
        for(auto it=email.begin();it!=email.end();it++){
            vector<string> temp;
            temp.push_back(name[it->first]);
            for(auto it1=it->second.begin();it1!=it->second.end();it1++){
                temp.push_back(*it1);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int  main(){
    vector<vector<string>> accounts={{"John","johnsmith@mail.com","john_newyork@mail.com"},{"John","johnsmith@mail.com","john00@mail.com"},{"Mary","mary@mail.com"}};
    Solution s;
    vector<vector<string>> ans=s.accountsMerge(accounts);
    for(auto it=ans.begin();it!=ans.end();it++){
        for(auto it1=it->begin();it1!=it->end();it1++){
            cout<<*it1<<" ";
        }
}