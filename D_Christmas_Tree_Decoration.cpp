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
const int mod = 998244353;

int fact[55];
int nCr[55][55];

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= 50; i++)
        fact[i] = (fact[i - 1] * i) % mod;

    for (int i = 0; i <= 50; i++) {
        nCr[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            nCr[i][j] = (nCr[i - 1][j - 1] + nCr[i - 1][j]) % mod;
        }
    }
}

void solve() {
    int n; 
    cin >> n;

    vi a(n + 1);
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int q = sum/n, r = sum%n;

    int cnt = 0, red = 0;     

    for (int i = 1; i <= n; i++) {
        if (a[i] <= q) {
            cnt++;
            red += (q - a[i]);
        }
    }

    if (a[0] < red) {
        cout << 0 << ln;
        return;
    }

    int extra = a[0] - red, ways = 0;

    for (int k = 0; k <= min(r, cnt); k++) {
        if (k<=extra && (r-k <= n-cnt)) {
            int cur = (nCr[cnt][k] * nCr[n - cnt][r - k]) % mod;
            ways = (ways + cur) % mod;
        }
    }

    int ans = ways;
    ans = (ans * fact[r]) % mod;
    ans = (ans * fact[n - r]) % mod;

    cout << ans << ln;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
