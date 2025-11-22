#include <bits/stdc++.h>
using namespace std;
#define ll long long
int x = 1000000;
vector<int> a(x+1);

void f(){
    a[0] = 0;
    for(int i = 1; i<=x; i++){
        int h = i;
        int m = 1;
        while(h>=10){
            h/=10;
            m*=10;
        } 
        if((h*m) == i) a[i] = a[i-1]+1;
        else a[i] = a[i-1];
    }
}
void solve() {
    int n;
    cin>>n;
    cout<<a[n]<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    f();
    while (t--) {
        solve();
    }
}