#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = n*(n-1)/2;

        vector<int> b(x);
        for (int j = 0; j < x; ++j) cin >> b[j];
        sort(b.begin(), b.end());

        int m= n-1, i = 0;
        while(m>0){
            cout<<b[i]<<" ";

            i+=m;
            m--;
        }
        cout<<1000000000<<endl;
    }
    return 0;
}