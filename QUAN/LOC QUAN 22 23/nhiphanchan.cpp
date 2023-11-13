#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long x){
    string s="", a="";
    while(x > 0){
        s += x % 2 + '0';
        x /= 2;
    }
    for(int i = s.size()-1; i >= 0; i--){
        a += s[i];
    }
    return a;
}

int main(){
    freopen("nhiphanchan.inp", "r", stdin);
    freopen("nhiphanchan.out", "w", stdout);

    long n;
    cin >> n;
    string s="";
    int b[2];
    fill(b, b+2, 0);
    s = dec_to_bin(n);
    for(int i = 0; i < s.size(); i++){
        b[s[i]-'0']++;
    }
    if(b[1] % 2 == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
