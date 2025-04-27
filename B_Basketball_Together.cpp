#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin>>n>>d;
    vector<int> arr;

    for(int i = 0; i<n; i++){
        int x; 
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int count = 0;
    int i = n-1;

    while(i>=0 && n>0){
        int a = ceil(d/arr[i])+1;
        if(n>=a){
            n-=a;
            count++;
        }else{
            break;
        }
        i--;
    }
    cout<<count<<endl;
}