#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;

void solve() {
    int n,a; 
    cin >>n>>a;
    vi v(n);
    int x = 0, y=0;

    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i]>a) x++;
        else if(v[i]<a) y++;
    }
    if(x>=y) cout<<a+1<<endl;
    else cout<<a-1<<endl;
    return; 

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
