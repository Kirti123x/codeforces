#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        int arr1[a], arr2[a];
        for(int j = 0;j < a; j++){
            cin>>arr1[j];
        }
        for(int j = 0;j < a; j++){
            cin>>arr2[j];
        }
        int d[a], count = 0, m = INT_MAX, index;

        for(int j = 0;j < a; j++){
            d[j] = arr1[j]-arr2[j];
            if(d[j]<0){
                count++;
                index = j;
            }
            else m = min(m,d[j]);
        }
        if(count >1){
            cout<<"NO"<<"\n";
        }
        else if(count == 1){
            if(-d[index]<=m)
                cout<<"YES\n";
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}