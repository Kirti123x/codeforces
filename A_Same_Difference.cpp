#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
typedef vector<int> vi;

void solve(){ 
    int n; cin>>n;
    string s; cin>>s;
    int x = 0;
    for(int i = 0; i<n-1; i++){
        if(s[i]==s[n-1])x++;
    }
    cout<<(n-x-1);
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
