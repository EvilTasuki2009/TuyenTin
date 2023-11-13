#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b){
	while(a*b != 0){
		if(a > b){
			a %= b;
		}
		else{
			b %= a;
		}
	}
	return a + b;
}

int main(){
	freopen("phanso.inp", "r", stdin);
	freopen("phanso.out", "w", stdout);
	long long a, b, c, d, tu, mau;
	cin >> a >> b >> c >> d;
	tu = a * d + b * c;
	mau = b*d;
	cout<<tu/gcd(abs(tu), abs(mau))<<' '<<mau/gcd(abs(tu), abs(mau))<<endl;
	tu = a * d - b * c;
	cout<<tu/gcd(abs(tu), abs(mau))<<' '<<mau/gcd(abs(tu), abs(mau))<<endl;
	tu = a * c;
	cout<<tu/gcd(abs(tu), abs(mau))<<' '<<mau/gcd(abs(tu), abs(mau))<<endl;
	tu = a * d;
	mau = b * c;
	cout<<tu/gcd(abs(tu), abs(mau))<<' '<<mau/gcd(abs(tu), abs(mau))<<endl;
	return 0;
}
