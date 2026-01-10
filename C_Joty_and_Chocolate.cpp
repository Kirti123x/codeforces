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
#define sp ' '
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
int Mid(int l, int r) { return l + (r - l) / 2; }

// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

// ----------- DSU ------------------
class DSU {
    vi parent, size;
public:
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        iota(all(parent), 0);
    }
    int find(int node) {
        if (parent[node] == node) return node;
        return parent[node] = find(parent[node]);
    }
    void unite(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return;
        if (size[pu] > size[pv]) {
            parent[pv] = pu;
            size[pu] += size[pv];
        } else {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
    }
};

template <typename Iterable>
void print(const Iterable &container) {
    for (const auto &element : container) {
        cout << element << " ";
    }
}

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a%b;
        }
        else {
            b = b%a; 
        }
    }
    if(a == 0) return b;
    return a;
}
void solve(){
    int n, a, b, p, q; cin>>n>>a>>b>>p>>q;
    int x = n/a, y = n/b, z = (n*gcd(a,b)/(a*b));

    int ans = 0;
    //cout<<x<<" "<<y<<" "<<z<<" ";
    if(p>q){
        ans += x*(p) + (y-z)*q;
    }else{
        ans += (x-z)*p+(y)*q;
    }
    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while (t--) {
        solve();
    }
}