#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, m;
    string a, b, c;
    cin>>n>>a;
    cin>>m;
    cin>>b>>c;
    for(int i = 0; i<m; i++){
        if(c[i]=='D'){
            a.push_back(b[i]);
        }else{
            a=b[i]+a;
        }
    }
    cout<<a<<endl;
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