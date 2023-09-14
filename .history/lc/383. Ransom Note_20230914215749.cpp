#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m[26]={0};
        for(int i=0;i<magazine.size();i++){
            m[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(m[ransomNote[i]-'a']==0){
                return false;
            }
            m[ransomNote[i]-'a']--;
        }
        return true;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string ransomNote,magazine;
        cin>>ransomNote>>magazine;
        Solution ob;
        cout<<ob.canConstruct(ransomNote,magazine)<<endl;
    }
    return 0;
}