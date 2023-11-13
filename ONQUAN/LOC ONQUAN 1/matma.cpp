#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("matma.inp", "r", stdin);
	freopen("matma.out", "w", stdout);
	string s;
	long sum = 0;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			if((s[i] - 48) % 2 == 0){
				sum += s[i] - '0';
			}
		}
	}
	cout<<sum;
	return 0;
}
