#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    unordered_set<int>s(a.begin(), a.end());

    int x = s.size();
    cout<<(2*x-1)<<endl;
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