#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        string s;
        cin>>s;
        int a = stoi(s);
        int b = sqrt(a);
        if(a == b*b){
            if(b%2 == 0){
                cout<<b/2<<" "<<b/2<<endl;
            }
            else{
                cout<<b/2<<" "<<b/2+1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}