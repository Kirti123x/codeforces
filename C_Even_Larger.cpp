#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll even_sum = 0, odd_sum = 0;
    ll ans = 0;

    for (int i = 1; i < n; i+=2) {
        if(n%2 == 0 && i == n-1){
            if(a[i-1]>a[i]) ans+=a[i-1]-a[i];
            a[i-1]=a[i];
        }
        else{
            if(a[i]<a[i-1]){
                ans+=a[i-1]-a[i];
                a[i-1]=a[i];
            }
            if(a[i]<a[i+1]){
                ans+=a[i+1]-a[i];
                a[i+1]=a[i];
            }
            if((a[i+1]+a[i-1])>a[i]){
                ans+=(a[i+1]+a[i-1])-a[i];
                a[i+1]-=((a[i+1]+a[i-1])-a[i]);
            }
        }



        // if ((i+1) % 2 == 0) {  // 1-indexed even
        //     even_sum += a[i];
        // } else {
        //     odd_sum += a[i];
        // }
        // ll diff = even_sum - odd_sum;
        // ans = max(ans, diff);
    }

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
