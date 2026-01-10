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
#define ln cout<<'\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int Mid(int l, int r) { return l + (r - l) / 2; }

// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

// ----------- DSU ------------------
//vi parent, size;
//int find(int node) {
//    if (parent[node] == node) return node;
//    return parent[node] = find(parent[node]);
//}
//void unite(int u, int v) {
//    int pu = find(u), pv = find(v);
//    if (pu == pv) return;
//    if (size[pu] > size[pv]) {
//        parent[pv] = pu;
//        size[pu] += size[pv];
//    } else {
//        parent[pu] = pv;
//        size[pv] += size[pu];
//    }
//}

template <typename Iterable>
void print(const Iterable &arr) {
    for (const auto &ele : arr) {
        cout<<ele<<" ";
    }
}

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return (a == 0 ? b : a);
}

void solve() {
    int n; cin>>n;
    vi v(n), sum1(n,0), sum2(n,0);

    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sum1[0] = sum2[0] = v[0];

    for (int i = 1; i < n; i++){
        sum1[i] = sum1[i-1] + v[i];
    }
    for (int i = 1; i < n; i++){
        sum2[i] = sum2[i-1] + abs(v[i]);
    }

    int ans=sum1[0]-sum1[n-1];

    for(int i=1;i<n;i++){
        ans=max(ans,(sum2[i-1])+(sum1[i]-sum1[n-1]));
    }        
    cout<<ans<<endl;
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