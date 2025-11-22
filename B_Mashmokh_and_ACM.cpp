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
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++){
        dp[1][i] = 1;
    }  
    for (int len = 1; len <= k; len++) {
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                dp[len][j] = (dp[len][j] + dp[len - 1][i])%MOD;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans+dp[k][i])%MOD;
    }
    cout << ans << "\n"; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
}

