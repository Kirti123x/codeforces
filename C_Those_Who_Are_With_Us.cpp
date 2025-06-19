#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    int maxVal = INT_MIN;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
            maxVal = max(maxVal, v[i][j]);
        }
        

    vector<int> row(n, 0), col(m, 0);
    int totalMax = 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (v[i][j] == maxVal) {
                row[i]++;
                col[j]++;
                totalMax++;
            }

    // If any row or column contains all max values
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (row[i] + col[j] - (v[i][j] == maxVal ? 1 : 0) == totalMax) {
                cout << maxVal - 1;
                return;
            }
    cout << maxVal;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}