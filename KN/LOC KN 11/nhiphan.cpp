#include <bits/stdc++.h>
using namespace std;

long bin_to_dec(string s){
    long result = 0, power=0;
    for(int i = s.size()-1; i >= 0; i--){
        result += (s[i]-48)*pow(2, power);
        power++;
    }
    return result;
}

int main(){
    freopen("nhiphan.inp", "r", stdin);
    freopen("nhiphan.out", "w", stdout);

    int k;
    cin >> k;
    string bin="1";
    for(int i = 1; i < k; i++){
        bin += '0';
    }

    cout<<bin_to_dec(bin)<<endl;
    cout<<bin;
    return 0;
}
