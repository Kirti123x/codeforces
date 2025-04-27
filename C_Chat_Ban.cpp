#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        long long x, k;
        cin>>k>>x;

        long long low = 1;
        long long high = 2*k-1;
        long long ans =1;

        while(high>low){
            long long mid = (low+high)/2;
            long long sum;
            if(mid>=k){
                sum = (k*(k+1)/2) + ((mid-k)*(2*(k-1)-(mid-k-1)))/2;
            }else{
                sum = (mid*(mid+1))/2;
            }

            if(sum<x){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        cout<<low<<endl;
    }
}