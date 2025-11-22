#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void solve() {
//     int n,q;
//     cin>>n>>q;
//     vector<int> a(n), b(n, 0);

//     for(int i = 0; i<n; i++){
//         cin>>a[i];
//         if(a[i]==0){
//             if(i == 0) b[0]=1;
//             else b[i]=b[i-1]+1;
//         }
//         else{
//             if(i!=0) b[i]=b[i-1];
//         } 
//     }
    
//     for(int i = 0; i<q; i++){
//         int l, r;
//         cin>>l>>r;
//         l--; r--;
//         int ans = 0;
//         if((b[r]-b[l])%3 == 0 && (r-l+1-(b[r]-b[l]))%3 == 0){

//         }
//         else{
//             cout<<-1<<endl;
//             continue;
//         }
//     }
//     return;
// }

long long solveGroup(const vector<int>& pos) {
    int m = pos.size();
    if (m % 3 != 0) return 1e18;
    vector<long long> dp(m+1, 1e18);
    dp[0] = 0;
    for (int i = 3; i <= m; i++) {
        long long gap1 = pos[i-1] - pos[i-2];
        long long gap2 = pos[i-2] - pos[i-3];
        dp[i] = min(dp[i], dp[i-3] + min(gap1, gap2));
    }
    return dp[m];
}

void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for (int i = 0; i<n; i++) cin>>a[i];

    // Store global positions
    vector<int> zeroPos, onePos;
    for (int i=0;i<n;i++) {
        if (a[i]==0) zeroPos.push_back(i);
        else onePos.push_back(i);
    }

    while(q--) {
        int l,r; cin>>l>>r;
        l--; r--;

        // Get subarray of zero positions inside [l,r]
        auto zl = lower_bound(zeroPos.begin(), zeroPos.end(), l);
        auto zr = upper_bound(zeroPos.begin(), zeroPos.end(), r);
        vector<int> zeros(zl, zr);

        auto ol = lower_bound(onePos.begin(), onePos.end(), l);
        auto orr = upper_bound(onePos.begin(), onePos.end(), r);
        vector<int> ones(ol, orr);

        if (zeros.size()%3 || ones.size()%3) {
            cout << -1 << "\n";
            continue;
        }

        long long ans = solveGroup(zeros) + solveGroup(ones);
        cout << ans << "\n";
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