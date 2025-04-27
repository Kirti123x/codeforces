#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        long long w, h;
        cin>>w>>h;

        long long h1, h2, v1, v2;

        vector<long long> ha,hb,va,vb;
        cin>>h1;
        for(long long j = 0; j<h1; j++){
            long long x;
            cin>>x;
            ha.push_back(x);
        }
        sort(ha.begin(),ha.end());
        cin>>h2;
        for(long long j = 0; j<h2; j++){
            long long x;
            cin>>x;
            hb.push_back(x);
        }
        sort(hb.begin(),hb.end());
        cin>>v1;
        for(long long j = 0; j<v1; j++){
            long long x;
            cin>>x;
            va.push_back(x);
        }
        sort(ha.begin(),ha.end());
        cin>>v2;
        for(long long j = 0; j<v2; j++){
            long long x;
            cin>>x;
            vb.push_back(x);
        }
        sort(vb.begin(),vb.end());

        long long hmax = max(ha.back() - ha.front(), hb.back() - hb.front());
        long long vmax = max(va.back() - va.front(), vb.back() - vb.front());

        long long area1 = hmax * h;
        long long area2 = vmax * w;

        cout << max(area1, area2) << endl;
    }
}