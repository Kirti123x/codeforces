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

void solve(){
    int n;
    cin>>n;
    vi a(n), b(n), c(n);

    map<int, int> pos;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        c[pos[b[i]]] = i;         // c -> index = a , val = b
    }

    int ans = 0, m = c[0];

    for (int i = 1; i < n; i++) {
        if (c[i] < m) ans++;
        m = max(m, c[i]);
    }
    cout<<ans;
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
}