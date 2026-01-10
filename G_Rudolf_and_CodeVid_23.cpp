#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e16;

void solve() {
    int n, m;  cin>>n>>m;
    bitset<10> tmp; cin >> tmp;
    int start = tmp.to_ulong();

    vector<pair<pair<int,int>, int>> edges(m);

    for (int i = 0; i < m; i++) {
        cin >> edges[i].second;    // days
        cin >> tmp;
        int remove = ((1LL<<n)-1)^(tmp.to_ulong());
        cin >> tmp;
        int add = tmp.to_ulong();

        edges[i].first = {remove, add};
    }
    vi dist(1LL<<n, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto cur = pq.top();
        int d = cur.first;
        int mask = cur.second;
        pq.pop();

        if (d > dist[mask]) continue;

        for (auto &e : edges) {
            int nextMask = (mask & e.first.first) | e.first.second;
            int nd = d + e.second;

            if (nd < dist[nextMask]) {
                dist[nextMask] = nd;
                pq.push({nd, nextMask});
            }
        }
    }
    cout<<(dist[0] == INF ? -1 : dist[0])<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}