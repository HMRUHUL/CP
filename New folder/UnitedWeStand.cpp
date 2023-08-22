#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;



int main() {
	// your code goes here
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int t, m;
	
	cin>>t;
	while(t--){
	    cin>>m;
	    vector<int> v;
	    int a;
	    for(int i = 0; i<m; i++){
	        cin>>a;
	        v.pb(a);
	    }
	    sort(v.begin(), v.end());
	    //for(int i = 0; i<m; i++) cout<<v[i]<<" ";
	    //cout<<endl;
	    vector<int> v1, v2;
	    int k=0;
	    int curr=v[0];
	    v1.pb(curr);
	    for(int i = 1; i<m; i++){
	        if(v[i]==curr&&!k){
	            v1.pb(v[i]);
	            curr=v[i];
	            
	        }
	        else{
	            v2.pb(v[i]);
	            k=1;
	        }
	    }
	    int p, q;
	    p = v1.size();
	    q = v2.size();
	    if(p&&q){
	    cout<<v1.size()<<" "<<v2.size()<<endl;
	    for(int i = 0;i <v1.size();i++) cout<<v1[i]<<" ";
	    cout<<endl;
	    for(int i = 0; i<v2.size();i++) cout<<v2[i]<<" ";
	    cout<<endl;
	    }
	    else cout<<"-1"<<endl;
	}
	

}