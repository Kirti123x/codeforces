#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int x = 0, ans = 0;
    int parity = a[0]%2;
    for(int i = 1; i<n; i++){
        if(a[i]%2 == 0){
            if(parity == 0) x++;
            else{
                parity = 0;
                ans+=x;
                x=0;
            }
        }
        else{
            if(parity == 1)x++;
            else{
                parity=1;
                ans+=x;
                x=0;
            }
        } 
    }
    ans+=x;
    cout<<ans<<endl;
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