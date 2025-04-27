#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int o = 0; o<t; o++){
        int n, m, i, j;
        cin>>n>>m>>i>>j;
        int x1, x2, y1, y2;
        if((i<=n/2 && j<=m/2) || (i>n/2 && j>m/2)){
            x1 = n, y1 = 1, x2 = 1, y2 = m;
        }
        else{
            x1 = 1, y1 = 1, x2 = n, y2 = m;
        }
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<"\n";
    }
}