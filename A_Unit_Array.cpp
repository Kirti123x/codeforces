#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        int plus=0, neg = 0, sum = 0;

        for(int i = 0; i<n; i++){
            cin>>a[i];
            b[i] = abs(a[i]);
            sum+=a[i];
            if(a[i]>0) plus++;
            else neg++;
        }
        sort(b.begin(), b.end());
        int j = n-1;

        while(j>=0 && sum<0){
            sum+=2*b[j];
            j--;
            plus++;
            neg--;
        }
        if(neg%2 == 1){
            j--;
        }
        cout<<(n-1-j)<<endl;;
    }
}