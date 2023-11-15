#include <bits/stdc++.h>
using namespace std;

bool isPrime(long x){
    if(x <= 1){
        return false;
    }
    else{
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0){
                return false;
            }
        }
    }
    return true;
}



int main(){
    freopen("hamso.inp", "r", stdin);
    freopen("hamso.out", "w", stdout);

    long tongle = 0, tong = 0;
    long n;
    cin >> n;

    if(n == 0){
        cout<<0;
    }
    else{
        if(isPrime(n)){
            while(n > 0){
                if((n % 10) % 2 != 0){
                    tongle += n%10;
                    n /= 10;
                }
            }
            cout<<tongle;
        }
        else{
            while(n > 0){
                tong += n%10;
                n /= 10;
            }
            cout<<tong;
        }
    }

    return 0;
}
