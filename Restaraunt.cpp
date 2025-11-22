#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    vector<int> a(pow(10,9)+2);
    for(int i =0; i<n; i++){
        cin>>v[i].first>>v[i].second;
        a[v[i].first]++;
        a[v[i].second+1]--;
    }
    int m = 0;
    for(int i = 1; i<a.size(); i++){
        a[i]=a[i]+a[i-1];
        m = max(m, a[i]);
    }
    cout<<m<<endl;

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
