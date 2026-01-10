#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long


int dp[20][2][20];   

int solve(string& s, int i, int tight, int cnt){
    if(i==s.size()) return (cnt>3 ? 0:1);

    if(dp[i][tight][cnt]!=-1) return dp[i][tight][cnt];

    int limit = (tight==1 ? s[i]-'0' : 9);
    int ans = 0;

    for(int k = 0; k<=limit; k++){
        int cnt_ = cnt + (k!=0 ? 1 : 0);
        ans += solve(s, i+1, (tight & (k==s[i]-'0')), cnt_);
    }
    return dp[i][tight][cnt]=ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int l, r; cin>>l>>r;
        
        string left = to_string(l-1), right = to_string(r);
        memset(dp, -1, sizeof(dp));
        int R = solve(right, 0, 1, 0);

        memset(dp, -1, sizeof(dp));
        int L = solve(left, 0, 1, 0);
        cout<<R-L<<endl;
    }
}