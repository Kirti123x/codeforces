#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 

const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int planes = 0; planes <= n; planes++)
        dp[planes][1] = 1;

    for (int kk = 2; kk <= k; kk++) {
        for (int planes = 0; planes <= n; planes++) {
            int left = (planes > 0 ? dp[planes - 1][kk] : 0);
            int right = (n - planes >= 0 ? dp[n - planes][kk - 1] : 0);
            dp[planes][kk] = (left + right) % MOD;
        }
    }

    cout<< dp[n][k]<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

