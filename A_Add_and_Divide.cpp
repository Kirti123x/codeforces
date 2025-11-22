#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countDivisions(ll n, ll k) {
    if (k == 1) return INT_MAX; 
    int steps = 0;
    while (n > 0) {
        n /= k;
        steps++;
    }
    return steps;
}

void solve() {
    ll n, b;
    cin >> n >> b;
    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    int min_operations = INT_MAX;
    for (int a = 0; a <= 30; ++a) {
        ll current_b = b + a;
        if (current_b == 1) {
            continue; 
        }
        int d = countDivisions(n, current_b);
        min_operations = min(min_operations, a + d);
    }
    cout << min_operations << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}