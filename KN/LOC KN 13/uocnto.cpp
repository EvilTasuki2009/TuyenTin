#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n){
	if(n <= 1){
		return 0;
	}
	else{
		for(int i = 2; i*i <= n; i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	return true;
}

bool commonDivisor(long n, long x){
	long sntnn = LONG_MAX;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			if(isPrime(i)){
				if(i < sntnn){
					sntnn = i;
				}
			}
		}
	}
	if(sntnn == x){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	freopen("uocnto.inp", "r", stdin);
	freopen("uocnto.out", "w", stdout);
	
	long long a, b, x;
	cin >> x >> a >> b;
	for(int i = a; i <= b; i++){
		if(commonDivisor(i, x)){
			cout<<i<<' ';
		}
	}
	
	return 0;
}
