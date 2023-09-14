#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool isPal(string st) {
    int left = 0;
    int right = st.size() - 1;

    while (left < right) {
        if (st[left] != st[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
    bool isPalindrome(string s) {
        int n = s.size();
        string st="";
        for(auto i:s){
            i = tolower(i);
            if((i>='a'&& i<='z') || (i>='0' && i <='9') ) st+=i;
        }
        return isPal(st);
           
    }
};
int main(){
    
}