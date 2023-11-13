#include<bits/stdc++.h>
using namespace std;

bool isNum5(long long x){
	if(x == 1){
		return false;
	}
	while(x % 2 == 0){
		x /= 2;
	}
	while(x % 3 == 0){
		x /= 3;
	}
	while(x % 5 == 0){
		x /= 5;
	}
	if(x == 1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	freopen("num5.inp", "r", stdin);
	freopen("num5.out", "w", stdout);
	int n, dem = 0;
	cin >> n;
	long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		dem = 0;
		if(isNum5(a[i])){
			dem = a[i] / 2 + a[i] / 3 + a[i] / 5 - a[i] / 6 - a[i] / 10 - a[i] / 15;
			cout<<"YES "<<dem<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
