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


// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return (a == 0 ? b : a);
}

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int ans = LLONG_MAX;

    for(int i = n-1; i>=0; i--){
        int g = 0;
        for(int j = i; j<n; j++){
            g= gcd(g, a[j]);
            if(g==1){
                ans = min(ans, (n-1+j-i));
                break;
            }
        }
    }
    if(ans == LLONG_MAX){
        ans = -1;
    } 
    int cnt = 0;
    for(int i = 0; i<n; i++) if(a[i]==1) cnt++;
    if(cnt>=1)  ans = min(ans, n-cnt);
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}