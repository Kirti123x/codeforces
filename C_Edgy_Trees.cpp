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
#define yes cout << "YES\n"
#define no cout << "NO\n"


// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;

int ans;
vi vis;
vvi adj;

int p(int x, int n){
    x %= mod;
    if(n == 0) return 1;
    else if(n == 1) return x;

    int a = p(x*x, n/2); 
    if(n%2) return a*x % mod; 
    else return a;
}
int cnt = 0;
void dfs(int a){
    cnt++;
    vis[a]=1;
    for(int x:adj[a]){
        if(!vis[x]) dfs(x);
    }
    return;
}
void solve() {
    int n, k; cin>>n>>k;
    ans = p(n, k);
    vis.resize(n, 0);
    adj.resize(n);


    for(int i = 0; i<n-1; i++){
        int x, y, z;
        cin>>x>>y>>z;
        if(z==0){
            adj[x-1].pb(y-1);
            adj[y-1].pb(x-1);
        }
    }
    for(int i = 0; i<n; i++){
        if(!vis[i]){
            cnt=0;
            dfs(i);
            ans = (ans-p(cnt, k)+mod)%mod;
        }
    }
    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}