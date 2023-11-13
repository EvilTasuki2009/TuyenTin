#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("matma.inp", "r", stdin);
	freopen("matma.out", "w", stdout);
	string s;
	cin >> s;
	long maxx = -1, num = 0;
	for(int i = 0; i < s.size()-1; i++){
		num = 0;
		while(isdigit(s[i])){
			num = num * 10 + (s[i] - 48);
			i++;
		}
		if(maxx < num){
			maxx = num;
		}
	}
	if(maxx != -1){
		cout<<maxx;
	}
	else{
		cout<<0;
	}
	
	return 0;
}
