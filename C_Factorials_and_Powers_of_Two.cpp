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
#define ln cout << '\n'

const long long MAX = 1e12;

int pcount(int n){
	return __builtin_popcountll(n);
}

int fbit(long long n){
	return 63 - __builtin_clzll(n);
}

void solve(int n) {
    vi fac;
    int a = 6, i = 4;    // 1, 2 lene se distinct nhi rahenge

    while(a<=n){
        fac.pb(a);
        a*=i;        
        i++;
    }
    int sz = fac.size();
    vi dp(1<<sz);

    dp[0]=0;
 
    for(int mask = 1; mask<(1<<sz); mask++){      
        int x = (1<<fbit(mask))^mask;
        dp[mask] = fac[fbit(mask)] + dp[x];     
    }

    int res = pcount(n);

    for(int i = 1; i<(1<<sz); i++){                     
        if(dp[i]<=n){
            int m = pcount(i)+pcount(n-dp[i]);      // pop_count(mask)+pop_count(n-dp[mask])
            res = min(res, m);
        }       
    }
    cout<<res;
    ln;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n; cin>>n;
        solve(n);
    }
}