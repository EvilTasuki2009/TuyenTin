#include <bits/stdc++.h>
using namespace std;

bool isPrime(long x){
    if(x <= 1){
        return 0;
    }
    else{
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

bool isSquareNum(long x){
    long a;
    a = sqrt(x);
    if(a*a == x){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    freopen("hamso.inp", "r", stdin);
    freopen("hamso.out", "w", stdout);

    long x, n = 0, tongle = 0;
    cin >> x;
    if(x == 0){
        cout<<0;
        return 0;
    }
    if(isPrime(x)){
        while(x > 0){
            if((x % 10) % 2 != 0){
                tongle = tongle + (x % 10);
            }
            x/=10;
        }
        cout<<tongle;
    }
    else{
        while(isSquareNum(n+x) == 0){
            n++;
        }
        cout<<n;
    }

    return 0;
}
