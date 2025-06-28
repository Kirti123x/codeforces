#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll rangeBitwiseAnd(ll  left, ll right){
    ll ans = 0;
    ll hold = right - left;
    ll gap = 1;
    while (left > 0){
        if (left % 2 == 1 && right % 2 == 1){
            if (hold < gap){
                ans += gap;
            }
        }
        left /= 2;
        right /= 2;
        gap *= 2;
    }
    return ans;
}

void solve(){
    ll n, x, ans = 0;
    cin>>n>>x;
    if(x>n){
        cout<<-1<<endl;
    }
    else if(n==x){
        cout<<n<<endl;
    }
    else if(x==0){
        ll m = (log2(n)+1);
        cout<<((ll)1<<m)<<endl;
    }
    else{
        ll pow = 1, plus = 0;
        bool check = true;
        ll a = n, b = x;

        while(n>0){
            if(x%2==1 && n%2==1){
                ans += pow;
            }
            else if(x%2==0 && n%2==0 && check){
                check = false;
                plus = pow;
            }
            else if(x%2==0 && n%2==1){
                check = true;
                plus = pow*2;
            }
            else if(x%2==1 && n%2==0){
                ans = -1;
                break;
            }
            pow*=2;
            x/=2;
            n/=2;
        }
        ans|=plus;
        
        if(ans!=-1 && ans>a && rangeBitwiseAnd(a,ans)==b) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}