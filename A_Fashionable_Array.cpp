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
        }
        int m = 0;
        sort(arr.begin(), arr.end());

        for(int j = 0; j<n; j++){
            if((arr[j]+arr[n-1])%2 == 0){
                m=j;
                break;
            } 
        }
        int x = 0;
        for(int j = n-1; j>=0; j--){
            if((arr[j]+arr[0])%2 == 0) {
                x = n-1-j;
                break;
            }
        }
        cout<<min(x, m)<<endl;
    }
}