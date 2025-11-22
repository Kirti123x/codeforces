#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];

    int x = 0, y = n-1;
    int min = 1, max = n;
    
    while(x<y){
        if(a[x]!=min&&a[x]!=max&&a[y]!=min&&a[y]!=max){
            cout<<x+1<<" "<<y+1<<endl;
            return;
        }
        if(a[x]==min){
            x++;
            min++;
        }
        else if(a[x]==max){
            x++;
            max--;
        }
        if(x<y){
            if(a[y]==min){
                y--;
                min++;
            }
            else if(a[y]==max){
                max--;
                y--;
            }
        }

    }
    cout<<-1<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}