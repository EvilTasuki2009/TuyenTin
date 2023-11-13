#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long dec){
    if(dec == 0){
        return "0";
    }
    string s="", a="";
    while(dec > 0){
        s = s+ (char)(dec % 2 + '0');
        dec /= 2;
    }
    for(int i = s.size() - 1; i >= 0; i--){
        a+=s[i];
    }
    return a;
}

int main(){
    freopen("nhiphancanbang.inp", "r", stdin);
    freopen("nhiphancanbang.out", "w", stdout);
    long n, a[2];
    cin >> n;
    string s="";
    s = dec_to_bin(n);
    fill(a, a+3, 0);
    for(int i = 0; i < s.size(); i++){
        a[s[i]-48]++;
    }
    if(a[1] == a[0]){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
