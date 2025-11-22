#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    if(b>=a){
        if((n+b)%2 == 0){
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
        return;
    }else{
        if((n+b)%2 == 0 && (n+a)%2==0){
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
        return;
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