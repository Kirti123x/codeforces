#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n;i++) cin>>a[i];

    int l = 0, r=n-1;
    int suml = 0, sumr = 0, ans =0;

    while (l <= r) {
        if (suml < sumr) {
            suml += a[l];
            l++;
        } else if (sumr < suml) {
            sumr += a[r];
            r--;
        } 
        if(suml == sumr) { // suml == sumr
            ans = l + (n - r - 1);
            suml += a[l];
            l++;
        }
    }
    cout<<ans<<endl;
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