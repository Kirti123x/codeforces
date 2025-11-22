#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
typedef vector<int> vi;

void solve(){ 
    int a, b, n; cin>>a>>b>>n;
    if(b>=a || b<=(a/n)){
        cout<<1;
        return;
    } 
    // int ans=0;  
    // while(n>=1 && b*n>=a){
    //     ans++;
    //     n--;
    // }
    // if(((a/b)+1) <ans) ans = (a/b) +1;
    cout<<2;
    return;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
        cout<<endl;
    }
}
