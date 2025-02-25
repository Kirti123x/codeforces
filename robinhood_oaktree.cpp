#include<bits/stdc++.h>
using namespace std;

int iseven(int n, int k){
    if(n%4 == 0) n=4;
    else n%=4;
    if(k%4 == 0) k=4;
    else k%=4;
    int ans = 0;
    for(int i = n; i>n-k; i--){
        ans+=i;
    }
    if(ans%2 == 0) return 1;
    else return 0;
}
int main(){
    int n;
    int k;
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        cin >> n;
        cin >> k;
        if(iseven(n,k) == 1) cout << "YES" << "\n";
        else cout<<"NO"<<"\n";
    }   
}