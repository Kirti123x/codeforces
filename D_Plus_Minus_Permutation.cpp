#include<bits/stdc++.h>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        long long n, x, y;
        cin>>n>>x>>y;
        long long c = x*y/(__gcd(x,y));
        long long m = n/x, k = n/y, u = n/c;

        long long first = n*(n+1)/2 - (n-m+u+1)*(n+u-m)/2;
        long long last = (k-u)*(k-u+1)/2;
        cout<<(first - last)<<endl;

    }
}