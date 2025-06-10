#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int a, b, c;
        cin>>a>>b>>c;
        int x = 2*c-(a+b);
        int m = 0;
        if(x%3 == 0){
            x/=3;
            int n = (b+x-a);
            if(n%2 == 0){
                n/=2;
                if(n>=0 && n<=x){
                    m=1;
                    cout<<"YES"<<endl;
                }               
            }
        }
        if(m == 0)cout<<"NO"<<endl;
    }
}