#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

const int MOD = 1e9 + 7;
// dp[i][0] -> rest on i
// dp[i][1] -> contest on i
// dp[i][2] -> gym on i

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    const int INF = 1e9;
    vector<vector<int>> dp(n, vector<int>(3, INF));

    dp[0][0] = 1;  
    if (a[0] == 1 || a[0] == 3) dp[0][1] = 0; 
    if (a[0] == 2 || a[0] == 3) dp[0][2] = 0; 

    for (int i = 1; i < n; i++) {
        dp[i][0] = 1 + min({dp[i-1][0], dp[i-1][1], dp[i-1][2]});

        if (a[i] == 1 || a[i] == 3)
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);

        if (a[i] == 2 || a[i] == 3)
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
    }
    cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << "\n"; 
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--){
        solve();
    }
}
