#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("oddsum.inp", "r", stdin);
	freopen("oddsum.out", "w", stdout);
	
	string s;
	int pos = 0, sumn = 0, sumtp = 0, i = 0 ;
	getline(cin, s);
	while(isdigit(s[i])){
		sumn += s[i] - '0';
		i++;
	}
	i++;
	while(isdigit(s[i])){
		sumtp += s[i] - '0';
		i++;
	}
	cout<<sumn - sumtp;
	
	return 0;
}
