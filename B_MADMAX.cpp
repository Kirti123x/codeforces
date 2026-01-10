#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define ln cout<<'\n'
using vi = vector<int>;
using vvi = vector<vi>;

vector<pair<int,char>> adj[105];
int dp[105][105][26];  
   //  max  luc  char

int solve(int v, int u, int c) {
    int &res = dp[v][u][c];
    if (res != -1) return res;
    res = 0;  

    for (auto i : adj[v]) {
        int x = i.first, nc = i.second-'a';
        
        if(nc>=c){
            if (solve(u, x, nc) == 0) {
                res = 1;
                break;
            }
        }
    }
    return res;
}

signed main() {
    ios::sync_with_stdio(false);  cin.tie(NULL);
    int n, m; cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int v, u;
        char c;
        cin >> v >> u >> c;
        v--; u--;
        adj[v].push_back({u, c});
    }
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (solve(i, j, 0) ? 'A':'B');
        }
        ln;
    }
}
