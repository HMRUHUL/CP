#include <bits/stdc++.h>
using namespace std;
bool customCompare(const std::pair<int, double>& a, const std::pair<int, double>& b) {
    if (a.first == b.first) {
        return a.second > b.second; 
    }
    return a.first < b.first; 
}

int minimumReschedules(int n, vector<vector<int>> &intervals) {

    vector<pair<int, int>> mp;
    for(int i = 0; i<n; i++){
        mp.push_back(make_pair(intervals[i][0], intervals[i][1]));
    }
    sort(mp.begin(), mp.end(), customCompare);

    int c = 0;
    for (auto it = mp.begin(); it != std::prev(mp.end()); ++it) {
        cout<<it->first<<" "<<it->second;cout<<endl;
    } 
    for (auto it = mp.begin(); it != std::prev(mp.end()); ++it) {
        if (it->first == next(it)->first) {
            c++;
        }
        else {
            if (it->second > next(it)->first && it->second < next(it)->second)
            c++;
        }
    }
    
    cout<<c;
    
}


int main() {
    vector<vector<int>>v;
   int n,a, b;
   cin>>n;
   int m = n;
  
   int i = 0;
   while(n--){
       vector<int>vv;
       cin>>a>>b;
        
       vv.push_back(a);
       vv.push_back(b);
       v.push_back(vv);
   }
    minimumReschedules(m, v);
    return 0;
}