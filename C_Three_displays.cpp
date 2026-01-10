#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e16;

int dp[3001][3001][3];

int f(int i, int pre,int m, vi& s, vi& c){
    if(m==0) return 0;
    if(i==s.size()) return INF;  

    if(dp[pre+1][i][m]!=-1) return dp[pre+1][i][m];

    int np = f(i+1, pre, m, s, c), p= INF;

    if(pre==-1 || s[pre]<s[i]){
        p = c[i] + f(i+1, i, m-1, s, c);
    }
    return dp[pre+1][i][m] = min(p, np);
}

void solve(){
    int n;
    cin>>n;
    vi s(n), c(n);
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<n; i++) cin>>c[i];

    memset(dp,-1,sizeof(dp));
    
    int ans = f(0, -1, 3, s, c);
    if(ans>=INF) cout<<-1;
    else  cout<<ans;
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
}