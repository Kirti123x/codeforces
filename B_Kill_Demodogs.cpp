#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    const long long MOD = 1e9 + 7;
    for(int i = 0; i<t; i++){
        long long n;
        cin>>n;
        long long ans = 0;
        ans = (n*(n+1))%MOD;
        ans = (ans*(4*n-1))%MOD;
        ans = (ans*2022/6)%MOD;

        
        cout<<ans<<endl;
    }
}