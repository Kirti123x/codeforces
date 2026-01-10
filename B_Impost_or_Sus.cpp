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
#define ln '\n'
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
    string s;
    cin>>s;
    int n = s.size();
    int ans = 0;

    for(int i =0; i<n; i++){
        if((i==0 || i==n-1) && s[i]=='u'){
            ans++;
            s[i]='s';
        }
        else if((s[i]=='u') &&s[i-1]=='u' ){
            ans++;
            s[i]='s';
        }
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