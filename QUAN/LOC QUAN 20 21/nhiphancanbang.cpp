#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long n){
    string s="";
    while(n > 0){
        s += (n%2) + '0';
        n/=2;
    }
    return s;
}

int main(){
    freopen("nhiphancanbang.inp", "r", stdin);
    freopen("nhiphancanbang.out", "w", stdout);

    long n;
    cin >> n;
    string s = dec_to_bin(n);
    long a[2];
    fill(a, a+2, 0);
    for(int i = 0; i < s.size(); i++){
        a[s[i] - '0']++;
    }
    if(a[0] == a[1]){
        cout<<1;
    }
    else{
        cout<<0;
    }


    return 0;
}
