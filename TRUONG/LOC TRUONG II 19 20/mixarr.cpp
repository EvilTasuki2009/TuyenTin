#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("mixarr.inp", "r", stdin);
	freopen("mixarr.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	int c[n+m];
	for(int i = 0; i < n; i++){
		c[i] = a[i];
	}
	for(int i = n; i < n+m; i++){
		c[i] = b[i-n];
	}
	for(int i = 0; i < m+n; i++){
		for(int j = i; j < n+m; j++){
			if(c[i] > c[j]){
				swap(c[i], c[j]);
			}
		}
	}
	for(int i = 0; i < n+m; i++){
		cout<<c[i]<<' ';
	}

	return 0;
}

