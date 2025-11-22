#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
typedef vector<int> vi;

int func(int mid, int x, int y) {
    for(int i=1; i<=x; i++) {
        mid = mid-mid/y;
        if(mid<=0) return 0;
    }
    return mid;
}

void solve(){ 
    int x,y,k; cin>>x>>y>>k;
    int ans = -1;
    int l = 1 , h = 1e12;
    while(l<=h) {
        int mid = l+(h-l)/2;
        int left = func(mid,x,y);
        
        if(left >= k) {
            ans = mid;
            h = mid-1;
        }
        else {
            l = mid+1;
        }
    } 
    cout<<ans;   
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
