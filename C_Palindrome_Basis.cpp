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
#define ln cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int Mid(int l, int r) { return l + (r - l) / 2; }

// CONSTANTS
const int mod = 1e9 + 7;

bool pal(int n) {
		string s = to_string(n);
		string str = s;
		reverse(s.begin(), s.end());
		return (s == str);
}

const int N = 4e4 + 5;
int dp[40005];

void solve() {
    int n; cin>>n;
    
    cout<<dp[n];
    ln;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> a;
    for (int i = 1; i <N; i++) {
        if(pal(i)) a.pb(i);
    }
    int sz = a.size();

    memset(dp, 0, sizeof(dp));
    dp[0] = 1; 

    for (int i = 0; i < sz; i++) {
        for (int x = 1; x < N; x++) {
            if (x-a[i] >= 0)  dp[x] = (dp[x] + dp[x-a[i]])%mod; 
        }
    }

    int t; cin >> t;
    while (t--) {
        solve();
    }
}






