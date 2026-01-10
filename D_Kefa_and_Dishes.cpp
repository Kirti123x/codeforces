#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

int f(int m, int e, int pre, vector<int> &a, vector<vector<int>>& c, vector<vector<int>>&dp){
    if(m==0) return 0;
    if(dp[e][pre]!=-1) return dp[e][pre];

    int eat = 0, ans = 0;

    for(int i = 1; i<a.size(); i++){
        if(e & (1<<(i-1))) continue;

        eat = a[i] + f(m-1, e|(1<<(i-1)), i, a, c, dp);
        ans = max(ans, eat+c[pre][i]);
    }
    return dp[e][pre] = ans;
}

void solve() {
    int n, m, k;  cin>>n>>m>>k;
    vector<int> a(n+1);
    for(int i = 1; i<=n; i++) cin>>a[i];

    vector<vector<int>> c(n+2,vector<int>(n+2,0));
    for(int i = 0; i<k; i++){
        int x ,y ,z;
        cin>>x>>y>>z;
        c[x][y] = z;
    }
    vector<vector<int>> dp(1<<(n+1), vector<int>(n+1, -1));
    cout<<f(m, 0, 0, a, c, dp);
    return;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
