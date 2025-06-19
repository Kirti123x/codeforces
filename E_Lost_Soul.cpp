#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int l = 0; l<t; l++){
        int n;
        cin>>n;
        vector<int>a(n), b(n);

        for(int j=0; j<n;j++){
            cin>>a[j];
        }
        for(int j=0; j<n;j++){
            cin>>b[j];
        }
        int i = n-1;
		unordered_set<int> alter1, alter2;

		for(i = n-1; i > -1; i--) {
			if(a[i] == b[i]) break;
			if(i % 2 == 0) {
				if(alter1.count(a[i])) break;
				if(alter2.count(b[i])) break;
				if(i+1 < n) alter2.insert(a[i+1]);
				if(i+1 < n) alter1.insert(b[i+1]);
				if(alter2.count(a[i])) break;
				if(alter1.count(b[i])) break;
			}
			else {
				if(alter2.count(a[i])) break;
				if(alter1.count(b[i])) break;
				if(i < n-1) alter1.insert(a[i+1]);
				if(i < n-1) alter2.insert(b[i+1]);
				if(alter1.count(a[i])) break;
				if(alter2.count(b[i])) break;
			}
		} 
		cout << i + 1 << "\n";
    }
}