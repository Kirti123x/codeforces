#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];

    }
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0) cout<<a[i]<<" ";
        else cout<<a[i]+1<<" ";
    }
    cout<<endl;
    return;
    

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