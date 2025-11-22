#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
 
        if(v[i]%2==1) {
            v[i] = v[i] + v[i]%10;
        }
    }
 
    sort(v.begin(),v.end());
 
    int l = v[n-1], count = 0;
 
    for(int i=0;i<n-1;i++){ 
        if(v[i]%5==0){
            if(v[i]==l) count++;
            continue;
        }

        int multi = (l-v[i])/20; 
        v[i] += multi*20;

        vector<int> hold(4);
        int h = v[i];
        
        for(int j=0;j<4;j++){
            hold[j] = h%10;
            h = h + hold[j];
        }
 
        for(int j=0; j<4 && v[i]<l; j++){
            v[i]+=hold[j];
        }
 
        if(v[i]==l) count++;
    }
    if(count == n-1) cout<<"Yes\n";
    else cout<<"No\n";
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