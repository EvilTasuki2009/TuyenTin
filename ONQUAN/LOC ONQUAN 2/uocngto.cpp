#include <bits/stdc++.h>
using namespace std;

bool isPrime(long x){
    if(x <= 1){
        return false;
    }
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

long smallestPrimeGCD(long n){
    for(int i = 0; i < n; i++){
        if(isPrime(i)){
            if(n % i == 0){
                return i;
            }
        }
    }
}

int main(){
    freopen("uocngto.inp", "r", stdin);
    freopen("uocngto.out", "w", stdout);
    long x, a, b;
    cin >> x >> a >> b;
    long sum = 0;

    for(int i = a; i <= b; i++){
        if(smallestPrimeGCD(i) == x){
            sum += 1;
        }
    }
    cout<<sum;

    return 0;
}
