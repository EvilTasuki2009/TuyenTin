#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("dongho.inp", "r", stdin);
	freopen("dongho.out", "w", stdout);
	long long n;
	cin >> n;
	if(n > 0){
		int a = n % 12;
		cout<<1+a;
	}
	else{
		int a = n % 12; 
		cout<<12+a+1;
	}
	
}
