#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vii = vector<pii>;

// ----------- Shortcuts --------------
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
#define ln cout << '\n'

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> v(n+1);
    for (int i = 0; i < n-1; i++){
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    vi level;
    queue<pii> q;
    vi vis(n+1,0);
 
    q.push({1,0});
 
    while (!q.empty()){
        auto it = q.front(); q.pop();

        int node = it.first, l = it.second;

        if(vis[node]==1) continue;
        vis[node] = 1;
        if(l>=level.size()) level.pb(0);
 
        level[l]++;
 
        for(auto &it:v[node]) {
            if(vis[it]==1) continue;
            q.push({it,l+1});
        }
 
    }
    int ind, val = 0;

    for (int i = 0; i < level.size(); i++){
        val = max(val, level[i]);
    }
    
    for (int i = 1; i < v.size(); i++){
        if(i==1){
            if(v[i].size()==val) {
                val++;
                break;
            }
        }
        else {
            if(v[i].size()-1==val){
                val++;
                break;
            }
        }
    }   
    cout<<val<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}