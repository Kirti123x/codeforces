#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int x,k;
        cin>>x>>k;
        if(x%k != 0){
            cout<<"1\n"<<x<<"\n";
        }
        else{
            if(k==2){
                if(x>=6){
                    cout<<"2\n"<<x-3<<"    "<<3<<"\n";
                }else{
                    cout<<"2\n"<<x+3<<"    "<<-3<<"\n";
                }
            }
            else if(k==3 && x == 3){
                cout<<"2\n"<<x+2<<"    "<<-2<<"\n";
            }else{
                cout<<"2\n"<<x-2<<"    "<<2<<"\n";
            }
        }
    }
}