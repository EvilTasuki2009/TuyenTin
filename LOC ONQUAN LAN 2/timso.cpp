#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("timso.inp", "r", stdin);
	freopen("timso.out", "w", stdout);
	int n, m, j = 0;
	bool findd=false;
	cin >> n >> m;
	long a[n], b[m];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(b[i] == a[j]){
				for(int h = j+1; h < n; h++){
					if(a[h] == a[j]){
						a[h] = 0;
					}
				}
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(b[i] == a[j]){
				findd = true;
				cout<<j+1<<' ';
			}
		}
		if(findd == false){
			cout<<0<<' ';
		}
		findd = false;
	}
	
	
	return 0;
}
