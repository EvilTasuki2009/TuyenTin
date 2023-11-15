#include <bits/stdc++.h>
using namespace std;

long bin_to_dec(long bin){
    if(bin == 0){
        return 0;
    }
    int temp, power = 0, dec = 0, i = 0;
    while(bin > 0){
        temp = bin % 10;
        dec = dec+ temp*pow(2, i);
        i++;
        bin /= 10;
    }
    return dec;
}

long bin_to_dec_using_str(string s){
    if(s == ""){
        return 0;
    }
    long rs = 0, pos = 0;
    for(int i = s.size()-1; i >= 0; i--){
        rs = rs + (s[i]-'0')*pow(2, pos);
        pos++;
    }
    return rs;
}

int main(){
    freopen("CONV2to10.inp", "r", stdin);
    freopen("CONV2to10.out", "w", stdout);
    long long n;
    cin >> n;
    cout<<bin_to_dec(n);
    return 0;
}
