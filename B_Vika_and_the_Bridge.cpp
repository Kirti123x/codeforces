#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<vector<int>> colours(k+1);

    for (int i = 1; i <= k; i++) colours[i].push_back(0);
    for (int i = 0; i < n; i++) colours[v[i]].push_back(i+1); 
    for (int i = 1; i <= k; i++) colours[i].push_back(n+1); 

    vector<priority_queue<int>> jumps(k+1); 
    int ans = INT_MAX; 

    for (int i = 1; i <= k; i++){
        for (int j = 0; j < colours[i].size()-1; j++){
            jumps[i].push(colours[i][j+1] - colours[i][j] - 1);
        } 
        int m = jumps[i].top(); 

        jumps[i].pop();
        if (m%2 == 0){
            jumps[i].push(m/2);
            jumps[i].push((m/2)-1);
        }
        else{
            jumps[i].push(m/2);
        }
        ans = min(ans, jumps[i].top()); 
    }
    cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define nl cout << endl
// typedef vector<int> vi;
// typedef vector<ll> vll;

// void solve(){
//     int n, k;
//     cin >> n >> k;

//     vi v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     int ans = INT_MAX;

//     for (int i = 1; i <= k; i++){
//         int cnt = 0;
//         vi jumps;
//         for(int j = 0; j<n; j++){
//             cnt++;
//             if(v[j]==i){
//                 jumps.push_back(cnt-1);
//                 cnt = 0;
//             }
//         }
//         jumps.push_back(cnt);
//         sort(jumps.begin(), jumps.end());
//         int x= jumps[jumps.size()-1]/2;
//         if(jumps.size()>=2) x = max(x, jumps[jumps.size()-2]);
//         ans = min(ans, x);
//     } 
//     cout<<ans<<endl;
// }
// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }