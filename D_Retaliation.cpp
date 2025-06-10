#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int j=0; j<n;j++){
            cin>>a[j];
        }
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        bool is = true;
        int x = a[1]-a[0];
        int y = (a[0]-x)/(n+1);
        int m = a[0]-(n)*y;
        if((a[0]-x)%(n+1) != 0 || y<0 || m<0) is = false;

        if(is){
            for(int j=0; j<n-1;j++){
                if((a[j+1]-a[j])!=x){
                    is = false;
                    break;
                }
            }
        }
        
        if(is){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}