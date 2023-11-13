#include <bits/stdc++.h>
using namespace std;

long tongbp(int n){
	long sum = 0;
	while(n > 9){
		sum += (n % 10)*(n % 10);
		n = n / 10;
	}
	sum += n*n;
	return sum;
}

int main(){
	freopen("tuoi.out", "w", stdout);
	int i = 100;
	while (true){
		for(int j = 1; j <= 31; j++){
			if(tongbp(i) + j > 100){
				cout<<i+j;
				return 0;
			}
		}
		i++;
	}
	return 0;
}
