#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        long long l, r;
        cin>>l>>r;
        long long pow1 = 0, temp1 = l, pow2 = 0, temp2 = r;
        while (temp1 > 0) {
            temp1 >>= 1;
            pow1++;
        }
        while (temp2 > 0) {
            temp2 >>= 1;
            pow2++;
        }
        if(pow1 == pow2){

        }
    }
    return 0;
}