#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("nhiphan.inp", "r", stdin);
	freopen("nhiphan.out", "w", stdout);
	int k;
	cin >> k;
	string decminn = "1", decmaxx = "1";
	for(int i = 0; i < k-1; i++){
		decminn += '0';
		decmaxx += '1';
	}
	int decmin = pow(2, k-1);
	int decmax = 0;
	for(int i = 0; i < decmaxx.size(); i++){
		decmax += pow(2, i);
	}
	cout<<decmin<<' '<<decminn<<endl;
	cout<<decmax<<' '<<decmaxx;
	return 0;
}
