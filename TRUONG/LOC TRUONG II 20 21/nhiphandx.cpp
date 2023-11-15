#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long x){
    string s1 = "", s="";
    while(x > 0){
        s1 += (x%2) + '0';
        x /= 2;
    }
    for(int i = s1.size()-1; i >= 0; i--){
        s += s1[i];
    }
    return s;
}

long bin_to_dec(string s){
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

bool isdx(long x){
    string s = "";
    s = dec_to_bin(x);
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == 0 && s[i+1] == 1){
            return false;
        }
        if(s[i] == 1 && s[i+1] == 1){
            return false;
        }
    }
    return false;
}

int main(){
    freopen("nhiphandx.inp", "r", stdin);
    freopen("nhiphandx.out", "w", stdout);

    long n;
    cin >> n;
    string s = "";

    if(isdx(n)){
        cout<<'i';
    }
    else{
        s = dec_to_bin(n);
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == '1'){
                s[i+1] = '0';
            }
            else{
                s[i+1] = '1';
            }
        }
    }
    cout<<bin_to_dec(s);


    return 0;
}
