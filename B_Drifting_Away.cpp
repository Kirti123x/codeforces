#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;

void solve() {
    string s;
    cin>>s;

    int n = s.size();
    if(n==1){
        cout<<"1\n";
        return;
    }
    char x=s[0];
    
    for(int i = 1; i<n; i++){
        if(x=='>'){
            if(s[i]=='*'||s[i]=='<'){
                cout<<"-1\n";
                return;
            }
        }
        else if(x=='*'){
            if(s[i]=='*'||s[i]=='<'){
                cout<<"-1\n";
                return;
            }
        }
        x = s[i];
    }
    int count = 0, maxcount = 0;
    int j = 0;

    while(j<n){
        while(s[j]=='<'){
            count++;
            maxcount=max(maxcount, count);
            j++;
        }
        if(s[j]=='*'){
            count++;
            maxcount=max(maxcount, count);
            count = 1;
            j++;
        }
        else count = 0;
        while(s[j]=='>'){
            count++;
            maxcount=max(maxcount, count);
            j++;
        }
    }
    cout<<maxcount<<endl;
    return; 

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
