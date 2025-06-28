#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<vector<ll>> v(m, vector<ll>(n));
    ll sum = 0;

    for (ll i = 0; i < n; ++i)
        for (ll j = 0; j < m; ++j) {
            cin >> v[j][i];
        }

    for(ll i= 0; i<m;i++){
        ll s = 0;
        sort(v[i].begin(), v[i].end());

        for(ll j = 0; j<n; j++){
            s+=(v[i][j]);
        }
        for(ll j = 0; j<n-1; j++){
            s-=v[i][j];
            sum+=(s-((n-j-1)*v[i][j]));
        }
    }   
    cout<<sum<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}