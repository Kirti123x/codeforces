#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 

int dfs(vector<int> &v, vector<vector<int>> &adj, int m, int consi, int maxConsi, int node, int p){
    if(adj[node].size()==1 && adj[node][0]==p){
        return (v[node]==1 ? max(maxConsi,consi+1) : maxConsi)<=m;
    } 
    int ans = 0;
    for(int i = 0; i<adj[node].size(); i++){
        if(adj[node][i] == p) continue;
        int newConsi = consi;
        int newMax = maxConsi;

        if(v[node]){
            newConsi++;
            newMax = max(newMax, newConsi);
        }
        else{
            newConsi = 0;
        }
        ans += dfs(v, adj, m, newConsi, newMax, adj[node][i], node);
    }
    return ans;
}

void solve() {
    int n, m;
    cin>>n>>m;
    vi v(n+1);
    for(int i = 1; i<=n; i++){
        cin>>v[i]; 
    } 
    vector<vector<int>> adj(n+1);

    for(int i = 0; i<n-1; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<dfs(v,adj,m,0,0,1,-1)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
}