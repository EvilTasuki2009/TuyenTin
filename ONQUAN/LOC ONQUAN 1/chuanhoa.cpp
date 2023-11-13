#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("chuanhoa.inp", "r", stdin);
	freopen("chuanhoa.out", "w", stdout);
	string s;
	getline(cin, s);
	
	//Xoá khoang trang dau dong va cuoi dong
	int j = 0, l = 0;
	while(s[j] == ' '){
		j++;
	}
	s.erase(0, j);
	j = 0;
	
	//Chuyen tat ca thanh chu thuong
	for(int i = 0; i < s.size(); i++){
		if(isalpha(s[i]) == 1){
			s[i] += 32;
		}
	}
	//Chuyen chu cai dau tien trong chuoi sau khi da xoa khoang cach thanh in hoa
	s[0] -= 32;
	
	//Chuyen nhung chu cai dau tien thanh in hoa
	for(int i = 0; i < s.size(); i++){
		if(isalpha(s[i])){
			if(s[i-1] == ' '){
				s[i] -= 32;
			}
		}
	}
	
	//Xoa tat ca dau khoang trang
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			while(s[i + 1] == ' '){
			s.erase(s.begin() + i+1);
				
			}
		} 
		
	}
	s.erase(s.begin() + s.size()-1);
	
	cout<<s;
	return 0;
}
