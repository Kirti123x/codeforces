#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,k;
    cin>>n>>k;
 
    double ans = 0;
 
    vector<double> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<k;i++) ans += v[i];
    
    double count = 1, sum = ans;
    int j = 0;
    
    for (int i = k; i < n; i++){
        ans += (v[i]-v[j]);
        sum+= ans;
        j++;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout<<sum/(n-k+1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}