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
#define ln cout << '\n'

int maxLevel;

void dfs(int node, int par,int level, vi& nodesAtLevel, vi& maxDepth, vi adj[]) {
	maxLevel = max(maxLevel, level);
	nodesAtLevel[level]++;
	maxDepth[node] = level;

	for (auto child : adj[node]) {
		if (child != par) {
			dfs(child, node, level + 1, nodesAtLevel, maxDepth, adj);
			maxDepth[node] = max(maxDepth[node], maxDepth[child]);
		}
	}
}

void solve() {
	int n; cin >> n;
	vi adj[n + 1];
	maxLevel = 0;

	for (int i = 0; i < n-1; i++) {
		int x, y; cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}

	vi maxdepth(n+1, 0), l(n+1, 0), subt(n+3, 0);

	dfs(1, -1, 1, l, maxdepth, adj);

	for (int i = 1; i <= n; i++) {
		subt[maxdepth[i]]++;
	}

	for (int i = 1; i <= n; i++) {   
		subt[i] += subt[i-1];
		l[i] += l[i-1];
	}
	int res = n-1;

	for (int i = 1; i <= maxLevel; i++) {
		int del = l[maxLevel] - l[i]+ subt[i-1];     // (maxdepth < i) + (pre[max]-pre[i])
		res = min(res, del);
	}
	cout<<res<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}