#include <bits/stdc++.h>
using namespace std;

bool isPrime(long x){
    if(x <= 1){
        return false;
    }
    else{
        for(int i = 2; i < x; i++){
            if(x % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    freopen("num.inp", "r", stdin);
    freopen("num.out", "w", stdout);

    long n;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        for(int j = 2; j < a[i]; j++){
            if(isPrime(a[i]-j)){
                cout<<j<<' '<<a[i]-j<<endl;
                break;
            }
        }
    }


    return 0;
}
