#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
typedef vector<int> vi;

void solve() {
    ll n; cin>>n;
    vi a(n+1, 0), pre(n+1, 0);
    int sum = 0;
    
    ll low = -1, ans = sum;
    
    for(int i = 1; i<=n; i++){
        cin>>a[i];
        sum+=a[i];
        pre[i] = sum;
    }

    for (int r = 1; r <= n; r++){
      //   (r-l+1)*(r+l)  = (r^2+r) + (l-l^2)
      
        ll high = r + r*r - pre[r];
        ll low1 = r - r*r + pre[r-1];    // (l-l^2)
 
        low = max(low1, low);
        ans = max(ans, sum + low + high);
    }
    cout<<ans<<endl;   
    return; 
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
