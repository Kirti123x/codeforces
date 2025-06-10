#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int l = 0; l<t; l++){
        int n; 
        cin>>n;
        vector<long long>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        // for(int i = 0; i<n; i++){
        //     long long m = 0, sum = 0;
        //     for(int j = 0; j<n-i; j++){
        //         m = max(m, arr[j]);
        //     }
        //     for(int j=n-i; j<n; j++){
        //         sum+=arr[j];
        //     }
        //     sum+=m;
        //     cout<<sum<<" ";
        // }
        vector<long long> prefix_sum(n + 1, 0);
        vector<long long> prefix_max(n + 1, 0);

        for(int i = 0; i < n; i++){
            prefix_sum[i + 1] = prefix_sum[i] + arr[i];
            prefix_max[i + 1] = max(prefix_max[i], arr[i]);
        }

        for(int i = 0; i < n; i++){
            long long m = prefix_max[n - i];
            long long sum = prefix_sum[n] - prefix_sum[n - i];
            sum += m;
            cout << sum << " ";
        }
        cout<<endl;
    }
}