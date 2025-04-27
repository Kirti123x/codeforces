#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j= 0; j<n; j++){
            cin>>arr[j];
        }
        int cnt = 0;
        bool insegment = false;
        for(int k:arr){
            if(k != 0){
                if(!insegment){
                    cnt++;
                    insegment = true;
                }
            }else{
                insegment = false;
            }
        }
        cout<<cnt<<"\n";
    }
}