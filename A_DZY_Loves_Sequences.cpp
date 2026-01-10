#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define pb push_back
#define sz(x) (int)(x.size())

/*
 change = 1 → we are in the "normal" increasing phase but allowed to switch
 change = 0 → we have switched to the alternate pattern

 conti = 1 → we are continuing the switched pattern (dependence on i-2)
 conti = 0 → not continuing the switched pattern

 start = 1 → this index i is being considered as the start of the subsequence
 start = 0 → subsequence has already started

 flag = 1 → special condition enabled (affects conti logic)
 flag = 0 → normal behavior
*/

int rec(vector<int>& v, int i, int change, int conti, int start, vector<vector<int>> &dp, int flag){
    if(i>=v.size()) return 0;
    int x = change*8 + conti*4 + flag *2 + start;

    if(dp[i][x]!=-1) return dp[i][x];
    int p = 0;

    if(start==1){
        p = 1 + max(rec(v, i+1, 1, 0, 0, dp, 0), rec(v, i+1, 0, 1, 0, dp, 1));
        p = max(p, rec(v, i+1, 1, 0, 1, dp, 0));
        return dp[i][x]= max(p,0);
    }
    else{
        if(conti==1){
            int ind = i - 2;
            if(ind>=0){
                if(v[i]>v[ind]+1||(flag==1)) p = 1 + rec(v,i+1,0,0,0,dp,0);
            }
            else{
                p = 1 + rec(v,i+1,0,0,0,dp,0);
            }
            return dp[i][x]= max(p,0);
        }
        else{
            if(change==1){
                if(v[i] > v[i-1]){
                    p = 1 + max(rec(v,i+1,1,0,0,dp,0),rec(v,i+1,0,1,0,dp,0));
                }
                else{
                    p = 1 + rec(v,i+1,0,1,0,dp,0);
                }
            }
            else{
                if(v[i]>v[i-1]) p = 1+rec(v,i+1,0,0,0,dp,0);
            }
            return dp[i][x]= max(p,0);
        }
    }    
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];

    vector<vector<int>> dp(a.size(), vector<int>(16,-1));
    int ans = rec(a,0,1,0,1,dp,0);
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}