#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("chiabanh.inp", "r", stdin);
	freopen("chiabanh.out", "w", stdout);
	int a[8], maxx = 0, sum = 0;
	for(int i = 0; i < 8; i++){
		cin >> a[i];
	}
	for(int i = 0; i < 5; i++){
		sum = (a[i] + a[i + 1] + a[i + 2] + a[i + 3]);
		if(maxx < sum){
			maxx= sum;
		}
	}
	cout<<maxx;
	return 0;
}
