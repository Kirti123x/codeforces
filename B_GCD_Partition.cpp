#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        long long n;
        cin>>n;
        vector<long long> arr(n), sum(n);
        long long total = 0;
        for(long long j = 0; j<n; j++){
            cin>>arr[j];
            total += arr[j];
            sum[j] = total;
        }
        long long x = 1;
        for(int j = n-2; j>=0; j--){
            if(total%sum[j] == 0){
                x = max(x, __gcd(total, sum[j]));
            } 
        }
        cout<<x<<endl;
    }
}


