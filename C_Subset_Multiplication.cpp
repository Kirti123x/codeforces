#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll my_lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> ans;
    for(int i = 0; i<n-1; i++){
        if(a[i+1]%a[i] == 0) continue;
        else{
            ans.push_back(a[i]/__gcd(a[i], a[i+1]));
        } 
    }
    if(ans.empty()){
        cout<<"1\n";
    }
    else{
        int m = ans[0];
        for(int i = 1; i<ans.size(); i++){
            m = my_lcm(ans[i], m);
        }
        cout<<m<<"\n";
    }
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