#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int rem = INT_MIN;

        for(int j=0; j<n;j++){
            cin>>a[j];
            int m = a[j]%k;
            rem = min(m, rem);
        }
        for(int j=0; j<n;j++){
            int m = a[j]%k;
            if(m == 0){
                rem = 0;
                break;
            }
            rem = max(m, rem);
        }

        if(rem == 0){
            cout<<0<<endl;
        }else{
            if(k==4){
                int two = 0, one = 0, three = 0;
                for(int j=0; j<n;j++){
                    if(a[j]%4==2) two++;
                    else if(a[j]%4==1) one++;
                    else if(a[j]%4==3) three++;
                }
                if(two>=2){
                    cout<<0<<endl;
                }
                else{
                    if(two == 1)cout<<1<<endl;
                    else if(two == 0){
                        if(three>=1) cout<<1<<endl;
                        else cout<<2<<endl;
                    } 
                }

            }else{
                cout<<k-rem<<endl;
            }
        }

    }
}