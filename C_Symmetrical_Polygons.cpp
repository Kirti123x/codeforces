#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    
    map<int, int> m;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    ll base = 0;
    vector<int> s;
    int y = 0;
    for (auto it = m.begin(); it != m.end(); it++) {
        base += (it->second / 2) * 1LL * (it->first);
        y+=(it->second/2);
        it->second %= 2;                     
        if (it->second) s.push_back(it->first);
    }
    sort(s.begin(), s.end());

    if(base == 0){
        cout<<"0\n";
        return;
    } 

    ll ans=0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (2*base > s[i]) {
            ans = max(ans, 2*base + s[i]);
        }
    }
    for (int i = s.size() - 1; i > 0; i--) {
        if (s[i - 1] + 2*base > s[i]) {
            ans = max(ans, 2*base + s[i - 1] + s[i]);
        }
    }
    if (y >= 2) ans = max(ans, 2*base);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}