#include<bits/stdc++.h>
using namespace std;
string alice(){
    int n;
    cin>>n;
    vector<pair<float ,string>> names;

    for(int i=0;i<n;i++){
        string hold;
        cin>>hold;
        names.push_back({0,hold});
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            float hold = 0;
            cin>>hold;
            names[j].first += hold;
        }
    }
    sort(names.begin(),names.end(), greater<>());
    return names[0].second;
}

int main(){
}