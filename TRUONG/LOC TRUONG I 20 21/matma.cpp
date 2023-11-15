#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long long dec){
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
    freopen("matma.inp", "r", stdin);
    freopen("matma.out", "w", stdout);

    long long n, sum=0;
    string s="";
    cin >> n;
    s = dec_to_bin(n);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            sum++;
        }
    }
    cout<<sum;

    return 0;
}
