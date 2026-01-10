#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    long long n, c;
    cin >> n >> c;

    vector<long long> v(n + 1);
    for (long long i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // mn[i] = {cost_if_chosen_first, index}
    vector<pair<long long,long long>> mn(n + 1);
    for (long long i = 1; i <= n; i++) {
        long long cost = min(i + v[i], (n + 1 - i) + v[i]);
        mn[i] = {cost, i};
    }

    sort(mn.begin() + 1, mn.end());

    // prefix sum of sorted costs
    vector<long long> pref(n + 1, 0);
    unordered_map<long long,long long> position; // maps index -> sorted position

    for (long long i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + mn[i].first;
        position[mn[i].second] = i;
    }

    auto getMaxAffordable = [&](long long target) {
        long long low = 0, high = n, best = 0;
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (pref[mid] <= target) {
                best = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return best;
    };

    long long answer = 0;

    for (long long i = 1; i <= n; i++) {
        long long costIfFirst = v[i] + i;
        long long remaining = c - costIfFirst;

        if (remaining < 0) continue;

        long long idx = getMaxAffordable(remaining);

        long long pos = position[i];

        if (pos <= idx) {
            long long cost = mn[pos].first;
            idx = getMaxAffordable(remaining + cost);
            answer = max(answer, idx);
        } else {
            answer = max(answer, 1 + idx);
        }
    }
    cout << answer << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--){
        solve();
    }   
}