#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int low = 1, high = n;

    while (low < high) {
        int mid = (low + high)/2;
        
        cout<<"? "<<(mid-low+1)<<" ";

        for (int i = low; i <= mid; i++) cout << i << " ";

        cout << endl<<flush; 

        int x, expected = 0;
        cin >> x; 

        for (int i = low; i <= mid; i++) expected += a[i];

        if (x > expected) high = mid;
        else low = mid + 1;
    }

    cout<<"! "<<low<<endl;
    cout<<flush; 
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
