#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k = 0; k<t; k++){
        int n;
        cin >> n;   
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
    
        int mod = 0;
    
        for (int i = 0; i < n / 2; i++){
            int hold = max(v[i], v[n - i - 1]) - min(v[i], v[n - i - 1]);

            if(mod>0 && hold>0) mod = __gcd(mod,hold);
            else mod = max(mod,hold);
        }
        int i = 0;

        if(mod==0) cout<<0<<endl;
        else{    
            for (i = 0; i < n / 2; i++){
                if(v[i]%mod!=v[n-1-i]%mod) break;
            }

            if(i==n/2) cout<<mod<<endl;
            else cout<<1<<endl;
        }
    }
}