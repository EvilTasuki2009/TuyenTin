#include <bits/stdc++.h>
using namespace std;

bool isPrime(long x){
    if(x <= 1){
        return false;
    }
    else{
        for(int i = 2; i*i <= x; i++){
            if(x % i == 0){
                return false;
            }
        }
    }
    return true;
}
int tongle(long x){
    int n = 0;
    while(x > 0){
        n = n + x%10;
        x/=10;
    }
    return n;
}

int main(){
    freopen("hamso.inp", "r", stdin);
    freopen("hamso.out", "w", stdout);

    long x;
    cin >> x;
    if(x == 0){
        cout<<0;
        return 0;
    }
    else{
        if(x % 2 != 0){
            cout<<tongle(x);
            return 0;
        }
        else{
            long i = x;
            bool findd = false;
            while(findd == false){
                if(isPrime(i)){
                    findd = true;
                }
                else{
                    i++;
                }
            }
            cout<<i;
            return 0;
        }
    }


    return 0;
}
