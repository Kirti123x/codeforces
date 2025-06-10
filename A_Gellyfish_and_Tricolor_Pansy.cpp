#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = min(a,c);
        int y = min(b,d);
        if(x>=y)cout<<"Gellyfish"<<endl;
        else cout<<"Flower"<<endl;
    }
}