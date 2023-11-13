#include <bits/stdc++.h>
using namespace std;

bool perfectNum(long long x){
	long sum = 0;
	for(int i = 1; i < x; i++){
		if(x % i == 0){
			sum += i; 
		}
	}
	if(sum == x){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	freopen("hoanhao.inp", "r", stdin);
	freopen("hoanhao.out", "w", stdout);
	long long n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		if(perfectNum(i)){
			cout<<i<<' ';
		}
	}
	return 0;
}
