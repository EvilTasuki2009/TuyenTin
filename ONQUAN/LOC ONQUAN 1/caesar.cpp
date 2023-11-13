#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("caesar.inp", "r", stdin);
	freopen("caesar.out", "w", stdout);
	string s;
	cin >> s;
	int k;
	cin >> k;
	for(int i = 0; i < s.size(); i++){
		if(s[i] - k < 97){
			s[i] = s[i] + k;
		}
		else{
			s[i] = s[i] - k;
		}
		if(s[i] + k > 122){
			s[i] = s[i] - k;
		}
	}
	cout<<s;
	
	return 0;
}
