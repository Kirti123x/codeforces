#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool is = false;
        unordered_map<int, int> m;
        for(int i = 1; i<n-1; i++){
            if(s[i]==s[0] || s[i]==s[n-1]){
                is = true;
                break;
            }
            m[s[i]]++;
            if(m[s[i]]>1){
                is = true;
                break;
            }
        }

        cout << (is ? "Yes" : "No") << endl;
    }
    return 0;
}