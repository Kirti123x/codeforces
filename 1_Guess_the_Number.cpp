#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int low = 1, high = 1e6, ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        cout << mid << endl;   
        cout<<flush;        
        string x;
        cin >> x;       

        if (x == "<") {
            high = mid-1;
        } 
        else { 
            ans = mid;
            low = mid+1;
        }
    }
    cout<<"! "<<ans<<endl;
    cout<<flush; 
}
