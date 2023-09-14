#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ml  = 0, n = s.size();
        if(s.size()==1) return 1;
        map<char, int> mp;
        int st = 0, mast = 0;
        for(int i= 0; i<n; i++)
        {
            if (mp.find(s[i]) != mp.end()){
                mast = max(mast, mp[s[i]]);
               
        
            } 
           
            ml = max(ml, i+1-mast);
            mp[s[i]] = i+1; 
            cout<<ml<<" "<<st<<endl;
          
        } 
        return ml ;
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLongestSubstring("abcabcbb")<<endl;
    cout<<s.lengthOfLongestSubstring("bbbbb")<<endl;
    cout<<s.lengthOfLongestSubstring("pwwkew")<<endl;
    cout<<s.lengthOfLongestSubstring("")<<endl;
    cout<<s.lengthOfLongestSubstring("dvdf")<<endl;
    cout<<s.lengthOfLongestSubstring("abcabcbb")<<endl;
    cout<<s.lengthOfLongestSubstring("bbbbb")<<endl;
    cout<<s.lengthOfLongestSubstring("pwwkew")<<endl;
}