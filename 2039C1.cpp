#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        long long x,y;
        cin>>x>>y;
        long long pow = 0, temp = x;
        while (temp > 0) {
            temp >>= 1;
            pow++;
        }
        
        long long a = min(y,(1LL<<(pow))-1), count = 0, b = 1LL<<(pow-1), m;

        for(long long k = b;k<=a; k++){
            m = x^k;
            if((k != x) && ((x%m == 0) || (k%m == 0))){
                count++;
            }
        } 
        cout<<count<<"\n";       
    }
    return 0;
}