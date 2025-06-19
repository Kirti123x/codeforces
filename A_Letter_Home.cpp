#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        vector<int> a(n);
        int minimum = INT_MAX, maximum=INT_MIN;
        int ans = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            maximum=max(maximum, a[i]);
            minimum=min(minimum, a[i]);
        }
        if(minimum<=s && maximum>=s){
            if(s-minimum <= maximum-s){
                ans+=(2*(s-minimum))+(maximum-s);
            }else{
                ans+=(s-minimum)+(2*(maximum-s));
            }
        }
        else if(minimum>=s && maximum>=s){
            ans+=(maximum-s);
        }
        else if(minimum<=s && maximum<=s){
            ans+=(s-minimum);
        }
        cout<<ans<<endl;
    }
}