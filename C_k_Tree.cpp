#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n, k, d;
    cin>>n>>k>>d;
    int mod = 1e9+7;
    vector<vector<int>> dp(n+1, vector<int>(2, 0));
    dp[0][0] = 1;  

    for (int i = 0; i <= n; i++) {
        for (int check = 0; check <= 1; check++) {
            for (int j = 1; j <= k; j++) {
                int sum = i+j;
                if (sum > n) break;

                int ch = check||(j>=d);
                dp[sum][ch] = (dp[sum][ch] + dp[i][check]) % mod;
            }
        }
    }
    cout<<dp[n][1]; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1; 
    while(t--){
        solve();
    }   
}