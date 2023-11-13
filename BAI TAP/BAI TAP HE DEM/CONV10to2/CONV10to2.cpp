#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long dec){
    if(dec == 0){
        return "0";
    }
    string s="", a="";
    while(dec > 0){
        s = s+ (char)(dec%2 + '0');
        dec /= 2;
    }
    for(int i = s.size()-1; i >= 0;i--){
        a += s[i];
    }
    return a;
}

int main(){
    freopen("CONV10to2.inp", "r", stdin);
    freopen("CONV10to2.out", "w", stdout);
    long long n;
    cin >> n;
    cout<<dec_to_bin(n);
    return 0;
}
