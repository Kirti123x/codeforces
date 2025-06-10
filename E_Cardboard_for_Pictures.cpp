#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long double n,c;
        cin>>n>>c;
        long double sqSum = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            long double hold ;
            cin >> hold;
            sum+=hold;
            sqSum+= hold*hold;
        }
        sqSum -= c;
        long double ans = ((-sum)+sqrt(sum*sum-n*sqSum))/(2*n);
    
        cout<< (long long)ans <<endl;      
                
    }
}