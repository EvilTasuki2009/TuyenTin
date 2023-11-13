#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("chuoiso.inp", "r", stdin);
	freopen("chuoiso.out", "w", stdout);
	string s1, s2;
	int s1num = 0, s2num = 0;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.size(); i++){
		if(isdigit(s1[i])){
			if(s1[i] != '0'){
				s1num = s1num*10 + (s1[i] - '0');
			}
		}
	}
	for(int i = 0; i < s2.size(); i++){
		if(isdigit(s2[i])){
			if(s2[i] != '0'){
				s2num = s2num*10 + (s2[i] - '0');
			}
		}
	}
	cout<<s1num<<' '<<s2num<<endl;
	cout<<s1num+s2num;
}
