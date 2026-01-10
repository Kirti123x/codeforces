#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;
const int INF = 1e16;

vvi adj;
vi subtree;

void dfs(int u, int parent){
    subtree[u]=1;

    for(int v:adj[u]){
        if(v==parent)continue;
        dfs(v, u);
        subtree[u]+=subtree[v];
    }
}
void solve(){
    int n;
    cin>>n;
    adj.assign(n, {});
    subtree.assign(n, 0);

    for(int i = 0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        adj[x-1].push_back(y-1) ;
        adj[y-1].push_back(x-1) ;
    }
    if(n%2){
        cout<<-1;
        return;
    }
    dfs(0, -1);
    int ans = 0;
    for(int i = 1; i<n; i++){
        if(subtree[i]%2==0) ans++;
    }
    cout<<ans;
    return ;
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
}