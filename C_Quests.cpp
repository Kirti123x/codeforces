#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int h = 0; h<t; h++){
        int n,k;
        cin>>n>>k;
        vector<int>a(n), b(n);

        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++){
            cin>>b[i];
        }
        
        int ans = 0;
        int hold = 0, m = b[0], sum = 0;

        for (int i = 0; i < n; i++){
            if(k-i-1 < 0){
                break;
            }
            sum += a[i];
            m = max(m,b[i]);
            hold = sum + (k-i-1)*m;
            ans = max(ans,hold);
        }       
        cout<<ans<<endl;
    }
}