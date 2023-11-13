#include <bits/stdc++.h>
using namespace std;

long long gcd(long a, long b){
    while(a*b != 0){
        a %= b;
        swap(a, b);
    }
    return a+b;
}

int main(){
    freopen("matkhau.inp", "r", stdin);
    freopen("matkhau.out", "w", stdout);

    string s;
    cin >> s;

    long sumchan = 0, sumle = 0;
    for(int i = 0; i < s.size(); i++){
        if((s[i] - '0') % 2 == 0){
            sumchan += s[i] - '0';
        }
        else{
            sumle += s[i] - '0';
        }
    }
    if(sumchan != 0 && sumle != 0){
        cout<<sumchan*sumle/gcd(sumchan, sumle);
    }
    else{
        if(sumchan == 0){
            cout<<sumle;
        }
        else{
            cout<<sumchan;
        }
    }

    return 0;
}
