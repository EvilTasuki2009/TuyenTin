#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n){
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

long tongle(long n){
	long sum = 0;
	while(n > 9){
		if(n % 2 != 0){
			sum += n % 10;
		}
		n = n / 10;
	}
	if(n % 2 != 0){
		sum += n;
	}
	return sum;
}	

long long tong(long n){
	long sum = 0;
	while(n > 9){
		sum += n % 10;
		n = n / 10;
	}
	sum += n;
	return sum;
}

int main(){
	freopen("hamso.inp", "r", stdin);
	freopen("hamso.out", "w", stdout);
	long n;
	cin >> n;
	if(n == 0){
		cout<<0;
		return 0;
	}
	if(isPrime(n)){
		cout<<tongle(n);
	}
	else{
		cout<<tong(n);
	}
	return 0;
}
