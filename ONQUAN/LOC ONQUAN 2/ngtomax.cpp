#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
	if(n <= 1){
		return false;
	}
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	freopen("ngtomax.inp", "r", stdin);
	freopen("ngtomax.out", "w", stdout);
	int n;
	long long sum = 0;
	cin >> n;
	long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long maxx = a[0];
	for(int i = 1; i <= n; i++){
		if(isPrime(a[i-1])){
			sum += i;
			if(maxx < a[i-1]){
				
				maxx = a[i-1];
			}
		}
	}
	cout<<maxx<<' '<<sum;
}
