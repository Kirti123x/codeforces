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

void solve(){
    int n;
    cin>>n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<vi> dp(n, vi(3, 0));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = 0;

    for (int i = 1; i < n; i++){
        dp[i][0] = a[i] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = b[i] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
    }

    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--)
    {
        solve();
    }
}



    // int n; cin>>n; 
    // vi a(n);
    // for(int i = 0; i<n; i++) cin>>a[i];

    // int prest = 0, ptest = 1e9, psport = 1e9;

    // for (int i = 0; i < n; i++) {

    //     int rest = min({prest, ptest, psport}) + 1;
    //     int contest = 1e9, gym = 1e9;

    //     if (a[i] == 1 || a[i] == 3)
    //         contest = min(prest, psport);
    //     if (a[i] == 2 || a[i] == 3)
    //         gym = min(prest, ptest);

    //     prest = rest;
    //     ptest = contest;
    //     psport = gym;
    // }

    // cout << min({prest, ptest, psport}) << "\n";



        