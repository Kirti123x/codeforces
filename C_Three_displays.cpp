#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;

const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    int s[n], c[n];
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) cin>>c[i];
 
    ll dp[n+1][3], ans = 1e17;

    for(int i=0; i<n; i++){
        dp[i][0] = c[i];

        for(int j=1; j<3; j++){
            dp[i][j] = 1e17;

            for(int k=0; k<i; k++){
                if(s[k] < s[i]) dp[i][j] = min(dp[i][j], dp[k][j-1]+c[i]);
            }
        }
        ans = min(ans, dp[i][2]);
    }

    if(ans == 1e17) ans = -1;
    cout<<ans;
    return; 
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
}