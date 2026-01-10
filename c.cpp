#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int one = 0;
        for (char c : s) {
            if (c == '1') one++;
        }
        int zero = n-one;

        int max_good;
        if (one >= zero) max_good = n;
        else max_good = 2*one;

        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') pos.push_back(i);
        }

        long long swaps = 0;
        int idx = 0;
        one = 0;
        zero =0;

        for (int i = 0; i < n && idx < pos.size(); i++) {
            if(s[i]=='1'){
                idx++;
                one++;
            }
            else{
                zero++;
                if(zero>one){
                    swaps += abs(pos[idx] - i);
                    one++;
                    s[pos[idx]]='0';
                    zero--;
                    idx++;
                }
            }
        }
        cout << max_good << " " << swaps << "\n";
    }
}




// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define ll long long
// #define mod 1000000007
// void solve(){
//     int n;
//     string s;
//     cin>>n>>s;
//     stack<int> st;
//     for (int i = n-1; i >=0; i--){
//         if(s[i]=='1') st.push(i);
//     }
//     int ans = 0;
//     int z = 0, o = 0;
//     int ct = 0;
//     for (int i = 0; i < n; i++){
//         if(s[i]=='1') o++;
//         else z++;
        
//         if(o<z){
//             while(!st.empty()&&st.top()<=i) st.pop();
//             if(!st.empty()){
//                 ans+=st.top()-i;
//                 s[st.top()] = '0';
//                 st.pop();
//                 ct++;
//                 z--;
//                 o++;
//             }
//         }
//         else ct++;
//     }
//     cout<<ct<<" "<<ans<<endl;
    
// }
// signed main() {

//     ll test=1;
// cin>>test;
//     while(test--)
//     {
//         solve();
//     }
//     return 0;
// }
