#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("chuso.inp", "r", stdin);
	freopen("chuso.out", "w", stdout);
	string s;
	string max;
	string temp="";
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		temp = "";
		while(isdigit(s[i])){
			temp += s[i];
			i++;
		}
		if(temp.size() > max.size()){
			max = "";
			max += temp;
		}
	}
	cout<<max.size()<<endl;
	cout<<max;
	return 0;
} 
