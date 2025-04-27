#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int j= 0; j<n; j++){
            cin>>arr[j];
        }
        if(n>=2){            
            if(k>=2){
                cout<<"YES\n";
            }else{
                int m=0;
                while(m<n-1){
                    if(arr[m]<=arr[m+1]){
                        m++;
                    }else{
                        break;
                    }
                }
                if(m==n-1){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }  
            }
        }else{
            cout<<"YES\n";
        }
    }
}