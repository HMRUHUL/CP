#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx = 0;
    int curr_min = INT_MAX, curr_max = 0;
    int prev_min=0, prev_max=0;
    for(int i = 0; i< prices.size();i++){
        if(curr_min>prices[i])prev_min = curr_min, curr_min = prices[i];
        prev_max = curr_max;
        curr_max = prices[i];
        maxx = max(maxx, curr_max-curr_min); 
    }
    return maxx;
    }
};

int main(){

}