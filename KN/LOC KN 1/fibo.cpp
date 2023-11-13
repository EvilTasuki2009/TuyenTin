#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("fibo.inp", "r", stdin);
	freopen("fibo.out", "w", stdout);

	long n;
	cin >> n;
	long f1, f2, f;
	while(n > 0){
		f1 = 0, f2 = 1, f=0;
		while(f1 + f2 <= n){
			f = f1 + f2;
			f1 = f2;
			f2 = f;
		}
		cout<<f<<' ';
		n = n - f;
	}

	return 0;
}
