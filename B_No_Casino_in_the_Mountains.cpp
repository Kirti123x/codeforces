#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];

    int count = 0;
    int i = 0;
    while(i + k <= n) {
        bool can = true;
        for(int j = 0; j < k; j++) {
            if(arr[i + j] == 1) {
                can = false;
                break;
            }
        }

        if(can) {
            count++;
            i += k + 1; 
        } else {
            i++; 
        }
    }

    cout << count << endl;

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