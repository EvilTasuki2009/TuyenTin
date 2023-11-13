#include <bits/stdc++.h>
using namespace std;

long exchange(int n){
    long result=0;
    while(n > 0){
        result = result*10+n%10;
        n /= 10;
    }
    return result;
}

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    freopen("shisho.inp", "r", stdin);
    freopen("shisho.out", "w", stdout);

    long n;
    cin >> n;
    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(isPrime(a[i])){
            sum++;
        }
    }
    cout<<sum;
    return 0;

}
