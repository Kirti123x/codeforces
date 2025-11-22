#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int, int> m;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        int x = a[i];

        for(int j=2; j*j<=x; j++){

            while(x%j ==0){
                m[j]++;
                x/=j;
            }
        }
        if(x>1) m[x]++;
    } 
    bool is = true;
    for(auto it:m){
        if((it.second) % n != 0){
            is = false;
            break;
        } 
    }
    if(is) cout<<"YES\n";
    else cout<<"NO\n";
    return;

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