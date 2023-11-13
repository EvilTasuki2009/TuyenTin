#include <bits/stdc++.h>
using namespace std;

long long binToDec(string n){
    long long x = 0;
    int valuepow = 1;
    for(int i = n.size()-1; i >= 0; i--){
        x += ((n[i]-'0')*valuepow);
        valuepow *= 2;
    }
    return x;
}

int main(){
    freopen("nhiphandao.inp", "r", stdin);
    freopen("nhiphandao.out", "w", stdout);
    string s, a="";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 48){
            a += '1';
        }
        else{
            a += s[i] - 1;
        }
    }
    cout<<binToDec(s)<<endl;
    cout<<binToDec(a);
}
