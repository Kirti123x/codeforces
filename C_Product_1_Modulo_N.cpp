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
    int n; cin>>n;
    vi v;
    int p = 1;
    for(int i = 1; i<n; i++){
        if(gcd(i, n)==1){
            v.push_back(i);
            p = (p*i)%n;
        } 
    }

    if(p==1) cout<<v.size()<<endl;
    else cout<<v.size()-1<<endl;

    for(int i = 0; i<v.size(); i++){
        if(p!=1 && v[i]==p){
            continue;
        }
        cout<<v[i]<<" ";
    }
    ln;
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