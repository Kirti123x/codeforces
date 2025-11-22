#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a;
    while(n>0){
        a.push_back(n%3);
        n/=3;
    }
    ll ans = 0;
    for(int i = 0; i<a.size(); i++){
        ll x;
        if(i==0) x = 3;
        else x = (pow(3, (i+1))+i*pow(3, i-1));
        ans += a[i]*x;

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