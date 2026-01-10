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
#define ln '\n'


// CONSTANTS
const int mod = 1e9 + 7;

template <typename Iterable>
void print(const Iterable &arr) {
    for (const auto &ele : arr) {
        cout<<ele<<" ";
    }
}

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return (a == 0 ? b : a);
}

void solve() {
    int n; 
    cin >> n;
    vi a(n), b(n), c(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<bool> ab(n, true), bc(n, true);

    for (int x = 0; x < n; x++) {
        for (int t = 0; t < n; t++) {
            if (a[t] >= b[(t + x) % n]) {
                ab[x] = false;
                break;
            }
        }
    }

    for (int y = 0; y < n; y++) {
        for (int t = 0; t < n; t++) {
            if (b[t] >= c[(t + y) % n]) {
                bc[y] = false;
                break;
            }
        }
    }

    int p = 0;
    for (int x = 0; x < n; x++) {
        if (!ab[x]) continue;

        for (int y = 0; y < n; y++) {
            int shiftbc = (y-x+n) % n;
            if (bc[shiftbc]) {
                p++;
            }
        }
    }
    cout<<p*n<<ln;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}