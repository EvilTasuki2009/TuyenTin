#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("hoanvi.inp", "r", stdin);
	freopen("hoanvi.out", "w", stdout);
	string s;
	int dem, maxx;
	cin >> s;
	
	for(int i = 0; i < s.size()-1; i++){
		maxx = s[i];
		for(int j = s.size()-1; j > i; j--){
			if(maxx < s[j]){
				maxx = s[j];
				dem = j;
			}
			swap(s[i], s[dem]);
			break;
		}
	}
	cout<<s;
	return 0;
}
