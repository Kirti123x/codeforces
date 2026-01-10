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


void solve() {
    string s;
    cin >> s;

    int x = 0, y = 0;

    // Final position
    for (char c : s) {
        if (c == 'L') x--;
        else if (c == 'R') x++;
        else if (c == 'U') y++;
        else if (c == 'D') y--;
    }

    int fx = x, fy = y;
    x = 0, y = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') x--;
        else if (s[i] == 'R') x++;
        else if (s[i] == 'U') y++;
        else if (s[i] == 'D') y--;

        int remaining = n - i - 1;
        int dist = abs(fx - x) + abs(fy - y);

        if (dist > remaining) {
            cout << "BUG\n";
            return;
        }
    }
    cout << "OK\n";
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