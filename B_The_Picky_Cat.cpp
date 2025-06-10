#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int>arr(n);
        
        for(int j = 0; j<n; j++){
            cin>>arr[j];
            arr[j] = abs(arr[j]);
        }

        int a = arr[0];
        sort(arr.begin(), arr.end());
        
        int m = 0;
        for(int j = 0; j<=(n)/2; j++){
            if(arr[j] == a) m = 1;
        }

        if(!m){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}