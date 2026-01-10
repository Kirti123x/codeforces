#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int ans = 0;
        for (int i = 1; i < n; i++){
            if (!arr[i] && arr[i - 1]){
                ans++;
            }
        }            
        if (arr[n-1] != 0) ans++;
        if (ans < 2) cout << ans << endl;
        else cout << 2 << endl;
    }
    return 0;
}