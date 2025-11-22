#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> first, second;
    for(int i = 0; i<n; i++) cin>>a[i];

    int i = 0;
    first.push_back(a[0]);

    while(i+1<n){
        if(a[i]<=a[i+1]){
            while(i+1<n && a[i]<=a[i+1]){
                i++;
            }
            second.push_back(a[i]);
            if(i<n) first.push_back(a[i]);
            i++;
        }

        if(i+1<n && a[i]>=a[i+1]){
            while(i+1<n && a[i]>=a[i+1]){
                i++;
            }
            
            second.push_back(a[i]);
            if(i<n) first.push_back(a[i]);
            i++;
        }        
    }
    if(first[first.size()-1] != a[n-1]) second.push_back(a[n-1]);
    int m = min(first.size(), second.size());

    ll x = 1;
    for(int i = 0; i<m; i++){
        if(first[i]!=second[i]) x++;
    }
    cout<<x<<endl;
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