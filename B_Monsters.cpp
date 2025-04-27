#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n, k;
        cin>>n>>k;
        vector<pair<int, int>> arr;

        for(int j = 0; j<n; j++){
            int x;
            cin>>x;
            arr.push_back({x,j+1});
        }
        
        for(int j = 0; j<n; j++){
            arr[j].first = arr[j].first%k;
            if(arr[j].first != 0){
                arr[j].first = abs(arr[j].first-k);
            }
        }
        sort(arr.begin(), arr.end());
        for(int j = 0; j<n; j++){
            cout<<arr[j].second<<" ";
        }
        cout<<endl;
    }
}