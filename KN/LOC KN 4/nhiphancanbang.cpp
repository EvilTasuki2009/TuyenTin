#include <bits/stdc++.h>
using namespace std;

long long bin_to_dec(string s){
    long long result = 0, pos=0;

    for(int i = s.size()-1;i >= 0; i--){
        result = result + (s[i]-'0')*pow(2, pos);
        pos++;
    }

    return result;
}

int main(){
    freopen("nhiphancanbang.inp", "r", stdin);
    freopen("nhiphancanbang.out", "w", stdout);

    string s="";
    cin >> s;
    long b[2];
    fill(b, b+2, 0);
    for(int i = 0; i < s.size(); i++){
        b[s[i]-'0']++;
    }
    if(b[0] == b[1]){
        cout<<bin_to_dec(s);
    }
    else{
        cout<<0;
    }


    return 0;
}
