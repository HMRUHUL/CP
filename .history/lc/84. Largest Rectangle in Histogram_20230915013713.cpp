#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() and heights[st.top()]>=heights[i]){
                int curr=st.top();
                st.pop();
                int left=st.empty()?-1:st.top();
                int right=i;
                ans=max(ans,(right-left-1)*heights[curr]);
            }
            st.push(i);
        }
        while(!st.empty()){
            int curr=st.top();
            st.pop();
            int left=st.empty()?-1:st.top();
            int right=n;
            ans=max(ans,(right-left-1)*heights[curr]);
        }
        return ans;

    }
};

int main(){
    
}