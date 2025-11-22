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

    if(n==1){
        cout<<"NO\n";
        return;
    }
    else{
        for(int i = 0; i<n-1; i++){
            if(a[i]>a[i+1]){
                cout<<"YES\n";
                cout<<"2\n";
                cout<<a[i]<<" "<<a[i+1]<<endl;
                return;
            }
        }
        cout<<"NO\n";
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