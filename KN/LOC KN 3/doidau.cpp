#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("doidau.inp", "r", stdin);
	freopen("doidau.out", "w", stdout);
	
	int a[5000], j = 0, limit = 0, sum = 0;
	while(j < 5000){
		cin >> a[j];
		if(a[j] == 0){
			limit = j;
			break;
		}
		j++;
	}
	for(int i = 0; i < limit; i++){
		if(a[i] > 0 && a[i+1] < 0){
			sum += 1;
		}
		else{
			if(a[i] < 0 && a[i+1] > 0){
				sum += 1;
			}
		}
	}
	cout<<sum;
	
	return 0;
}
