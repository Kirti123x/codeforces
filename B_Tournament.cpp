#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, j, k;
    cin>>n>>j>>k;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];

    int x = arr[j-1];
    sort(arr.begin(), arr.end());
    
    if(k==1 && x!=arr[n-1]) cout<<"NO\n";
    else cout<<"YES\n";
    
    
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