#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("tinhtoan.inp", "r", stdin);
	freopen("tinhtoan.out", "w", stdout);
	int n;
	long long m, sumlon = 0, sumnho = 0;
	cin >> n >> m;
	long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] <= m){
			sumnho += a[i];
		}
		else{
			sumlon += a[i];
		}
	}
	cout<<sumlon-sumnho;
}
