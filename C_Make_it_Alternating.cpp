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

// CONSTANTS
const int mod = 998244353;
const long long INF = 1e18;

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
    string s; cin >> s;
    int res = 1;
    int k = 0, n = s.size();
    for (int l = 0; l < n; ) {
        int r = l+1;
        while(r < n && s[l] == s[r]) ++r;
        res = (res*1LL*(r-l))%mod;
        k+=(r-l-1);
        l = r;
    }    
    for (int i = 1; i <= k; ++i) res = (res*1LL*i)%mod;
    cout<<k<<' '<<res<<endl;
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