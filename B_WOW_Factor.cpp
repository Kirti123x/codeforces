#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    vector<vector<int>> dp(n+1, vector<int>(3, 0));

    int v = 0, w = 0;

    for(int i = 1; i<n; i++){
        if(s[i]=='v'&&s[i-1]=='v'){
            dp[i+1][0]++;
            dp[i+1][2]+=dp[i][1];
        }
        else if(s[i]=='o'){
            dp[i+1][1]+=dp[i][0];
        }
        dp[i+1][0]+=dp[i][0];
        dp[i+1][1]+=dp[i][1];
        dp[i+1][2]+=dp[i][2];
    }
    cout<<dp[n][2];

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
}