#include <bits/stdc++.h>
using namespace std;

int numlp(int n){
	int sum = 0;
	while(n > 9){
		sum = sum + ((n % 10)*(n % 10)*(n % 10));
		n = n / 10;
	}
	sum += (n % 10)*(n% 10)*(n% 10);
	return sum;
}

int main(){
	freopen("findnum.out", "w", stdout);
	for(int i = 100; i <= 999; i++){
		if(i == numlp(i)){
			cout<<i<<' ';
		}
	}
	return 0;
}
