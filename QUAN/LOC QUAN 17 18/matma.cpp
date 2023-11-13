#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b){
	while (a*b != 0){
		if(a > b){
			a %= b;
		}
		else{
			b %= a;
		}
	}
	return a+b;
}

int main(){
	freopen("matma.inp", "r", stdin);
	freopen("matma.out", "w", stdout);
	long n;
	cin >> n;
	long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long bcnn = a[0];
	for(int i = 1; i < n; i++){
		bcnn = (bcnn*a[i])/gcd(bcnn, a[i]);
	}
	cout<<bcnn;
}
