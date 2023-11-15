#include <bits/stdc++.h>
using namespace std;

bool isPrime(long x){
    if(x <= 1){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    freopen("hieunt.inp", "r", stdin);
    freopen("hieunt.out", "w", stdout);

    string s="";
    cin >> s;

    return 0;
}
