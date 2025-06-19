#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int>a(n), b(n);

        for(int j=0; j<n;j++){
            cin>>a[j];
        }
        int mi = INT_MAX, ma = INT_MIN ,x = 0, y=0; 

        for(int j=0; j<n;j++){
            if(a[j]<mi){
                x=j;
                mi = a[j];
            }
            if(a[j]>ma){
                y=j;
                ma = a[j];
            }
        }
        if(mi==ma)cout<<"NO\n";
        else{
            cout<<"YES\n";
            swap(*(a.begin()+x), *(a.begin()+y));
            for(int j=0; j<n;j++){
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        
        // int sum = a[0];
        // vector<pair<int, int>> m(n-1);

        // for(int j=0; j<n-1;j++){
            
        //     m[j].first = sum ;
        //     m[j].second = a[j+1];
        //     sum+=a[j+1];
        // }
        // int ans=0;
        // for(int j = n-2; j>=0; j--){
        //     if(m[j].first == m[j].second){
        //         ans = j;
        //         break;
        //     }
        // }
        // swap(*a.begin(), *(a.begin()+ans+1));

        // bool is = false;
        // for(int j=0; j<n;j++){
        //     if(b[j]!=a[j]){
        //         is=true;
        //         break;
        //     }
        // }
        // if(is){
        //     cout<<"YES\n";
        //     for(int j=0; j<n;j++){
        //         cout<<a[j]<<" ";
        //     }
        //     cout<<endl;
        // }else{
        //     cout<<"NO\n";
        // }
    }
}