#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++) cin>>a[i];
    for (ll i = 0; i < m; i++) cin>>b[i];

    sort(a.begin(), a.end());

    ll sum = 0;
    ll x = n-1, y = 0;

    while(x>=0){
        if(a[x]>y){
            sum+=b[y];
            x--;
            y++;
        }
        else{
            sum+=b[a[x]-1];
            x--;
        }
    }
    cout<<sum<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}