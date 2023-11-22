#include <bits/stdc++.h>
using namespace std;

string plusString(string s1, string s2){
    if(s1.size() < s2.size()){
        s2 = '0' + s2;
        while(s1.size() != s2.size()){
            s1 = '0' + s1;
        }
    }
    else{
        while(s2.size() != s1.size()){
            s2 = '0' + s2;
        }
    }

}

int main(){
	freopen("nhiphan.inp", "r", stdin);
	freopen("nhiphan.out", "w", stdout);
	int k;
	cin >> k;
	string decminn = "1", decmaxx = "1";
	for(int i = 0; i < k-1; i++){
		decminn += '0';
		decmaxx += '1';
	}
    long decmin = 0;
    long decmax = 0;
	for(int i = 0; i < decmaxx.size(); i++){
		decmax += pow(2, i);
	}
	cout<<decmin<<' '<<decminn<<endl;
	cout<<decmax<<' '<<decmaxx<<endl;
	return 0;
}
