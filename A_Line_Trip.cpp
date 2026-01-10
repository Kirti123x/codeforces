#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> a;
        a.push_back(0);

        for (int i = 0; i < n; i++) {
            long long p;
            cin >> p;
            a.push_back(p);
        }
        a.push_back(x);

        long long ans = 0;
        for (int i = 1; i < a.size(); i++) {
            if (i == a.size() - 1)
                ans = max(ans, 2 * (a[i] - a[i - 1]));
            else
                ans = max(ans, a[i] - a[i - 1]);
        }

        cout << ans << '\n';
    }
    return 0;
}
