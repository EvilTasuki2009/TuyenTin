#include <bits/stdc++.h>
using namespace std;

bool isPrime(long a){
	for(int i = 2; i < a; i++){
		if(a % i == 0){
			return false;
		}
		else{
			return true;
		}
	}
}

int main(){
	freopen("uoc.inp", "r", stdin);
	freopen("uoc.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cout<<i<<' ';
		}
	}
	cout<<endl;
	for(int i = 2; i <= n; i++){
		if(n % i == 0){
			if(isPrime(i)){
				cout<<i<<' ';
			}
		}
	}
}
