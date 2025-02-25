#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, m, n, k;
    cin>>t;
    
    for(int x = 0; x<t; x++){
        vector<int> cnt; 
        cin>>m>>n>>k;
        int arr[m][n];     
        for(int j = 0; j<m; j++){
            for(int x = 0; x<n; x++){           //input
                cin>>arr[j][x];
            }
        } 

        for(int j = 0; j<m; j++){
            int count = 0;
            for(int x = 0; x<n; x++){
                if(arr[j][x] == 1) count++;
            }       
            cnt.push_back(count);
        }

        int sum = 0;
        for(int i = 0; i<k; i++){
            sum+=cnt[i];
        }
        int maxsum = sum;

        for(int i = 1; i+k-1 < m; i++){
            sum= sum-cnt[i-1]+cnt[i+k-1];
            maxsum = max(maxsum,sum);
        }   
        cout<<maxsum<<"\n" ;
    }  
}