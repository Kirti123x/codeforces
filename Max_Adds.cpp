#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int pre = 0, best = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            pre += b[i];
            best = max(best, a[i] - pre);
        }
        int x = pre, y = best + x;

        int threshold = max(0LL, y-x), k = min(m, threshold);
        int ans = k*y;

        if(k<m){
            int cnt = m-k;
            int sumX = (k + 1 + m)*cnt/2;
            ans += sumX + cnt*x;
        }
        cout<<ans<<'\n';
    }
}
