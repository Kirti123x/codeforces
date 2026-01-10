#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    vi a(n+1, 0), b(n+1, 0);

    for(int i = 0; i<n; i++){
        if(s[i]=='a'){
            a[i+1]+=a[i]+1;
            b[i+1]+=b[i];
        }
        else{
            a[i+1]=a[i];
            b[i+1]+=b[i]+1;
        }
    }
    int ans = 0;
    for(int i =0 ;i<=n; i++){
        for(int j = i; j<=n; j++){

            int x = a[i], y = b[j]-b[i], z = a[n]-a[j];

            ans = max(ans, x+y+z);

        }
    }
    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}