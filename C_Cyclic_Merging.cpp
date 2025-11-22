#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
typedef vector<int> vi;

void solve(){ 
    int n; cin>>n;
    vi a(n); 
    for(int i = 0; i<n; i++) cin>>a[i];

    int s = 0, m = 0;
    for(int i = 0; i<n; i++){
        int j = (i+1)%n;
        s+=max(a[i], a[j]);
        m = max(m, max(a[i], a[j]));

    }
    cout<<(s-m);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
        cout<<endl;
    }
}
