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

int Mid(int l, int r) { return l + (r - l) / 2; }

// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int x = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int>s(a.begin(), a.end());
    
    for(auto& it:s){
        if(it==x) x++;
        else break;
    }
    cout<<min(k-1, x);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        ln;
    }
}