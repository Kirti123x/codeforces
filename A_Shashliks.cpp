#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,a,b,x,y;
        cin>>n>>a>>b>>x>>y;
        if(n<a && n<b) cout<<0<<endl;
        else{
            int ans = 0;
            if(x>y){
                if(n>=b){
                    ans += (n-b+y)/y;
                    n -= ans*y;
                }
                if(n>=a){
                    ans += (n-a+x)/x;
                }
            }
            else if(y>x){
                if(n>=a){
                    ans += (n-a+x)/x;
                    n -= ans*x;
                }
                if(n>=b){
                    ans += (n-b+y)/y;
                }
            }
            else{
                if(a>b){
                    ans += (n-b+y)/y;
                }
                else{
                    ans += (n-a+x)/x;                   
                }
            }
            cout<<ans<<endl;
        }
    }
}