#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("chuoi.inp", "r", stdin);
	freopen("chuoi.out", "w", stdout);
	string s;
	int  a;
	int b[255];
	fill(b, b+256, 0);
	cin >> s;
	cin >> a;
	
	
	for(int i = 0; i < s.size(); i++){
		b[s[i]-48]++;
	}
	cout<<b[a]<<endl;
	for(int i = 0; i < 255; i++){
		if(b[i] != 0){
			cout<<i<<' '<<b[i]<<endl;
		}
	}
	int pos = 0;
	int maxx = 0;
	for(int i = 0; i < 255; i++){
		if(maxx < b[i]){
			pos=i;
			maxx = b[i];
		}
	}
	cout<<pos<<' '<<maxx;
	
	
	
	return 0;
}
