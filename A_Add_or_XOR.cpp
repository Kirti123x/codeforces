#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b, x, y;
    cin>>a>>b>>x>>y;
    ll m = (b-a)/2;
    if(((a-b)>1) || ((a-b)==1 && a%2==0)){
        cout<<-1<<endl;
        return;
    }
    else if((a-b)==1 && a%2==1){
        cout<<y<<endl;
        return;
    }
    else if(a==b){
        cout<<0<<endl;
        return;
    }
    else{
        if(x<=y){
            cout<<((b-a)*x)<<endl;
            return;
        }
        else{
            if((b-a)%2 == 0){
                cout<<((m)*x + m*y)<<endl;
                return;
            }
            else{
                if(b%2 == 0){
                    cout<<((m+1)*x + m*y)<<endl;
                    return;
                }else{
                    cout<<((m+1)*y + m*x)<<endl;
                    return;
                }
                
            }
        }
    }
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